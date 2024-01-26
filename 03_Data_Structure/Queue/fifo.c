#include "fifo.h"

BUF_STATUS_t fifo_init (FIFO_BUF_t* fifo ,element_t* buf , uint32 length){
    fifo->base =buf;
    fifo->head =fifo->base;
    fifo->tail =fifo->base;
    fifo->length = length;
    fifo->count = 0;

    if (fifo->base && fifo->length){
        return fifo_no_error;
    }else{
        return fifo_null;
    }
}

BUF_STATUS_t fifo_is_buf_full (FIFO_BUF_t* fifo){
    //check is fifo is exist
    if(!fifo->base || !fifo->head || !fifo->tail){
        return fifo_null;
    }
    if (fifo->count >= fifo->length){
        printf("FIFO is full \n");
        return fifo_full;
    }
    return fifo_no_error;
}

BUF_STATUS_t fifo_enqueue (FIFO_BUF_t* fifo ,element_t* item){
    if (fifo_is_buf_full(fifo) == fifo_no_error){
        *(fifo->head) = *item;
        fifo->count++;

        // circular fifo
        if(fifo->head ==(fifo->base + ( fifo->length * sizeof(element_t) ))){
            fifo->head = fifo->base;
        }else{
            fifo->head++;
        }
        return fifo_no_error;
    }else{
        printf("=====!!!obs!!!=====enqueue failed\n");
        return fifo_is_buf_full ( fifo);
    }
}

BUF_STATUS_t fifo_dequeue (FIFO_BUF_t* fifo ,element_t* item){
    //check is fifo is exist
    if(!fifo->base || !fifo->head || !fifo->tail){
        return fifo_null;
    }

    //check is the buf is empty
    if (fifo->count ==0){
        printf("!!!fifo is empty!!!\n");
        return fifo_empty;
    }
    *item = *fifo->tail;
    fifo->count--;

    // circular fifo
    if(fifo->tail ==(fifo->base + ( fifo->length * sizeof(element_t) ))){
        fifo->tail = fifo->base;
    }else{
        fifo->tail++;
    }
    return fifo_no_error;
}

void fifo_print(FIFO_BUF_t* fifo){
    element_t* temp;
    uint32 i;
    if (fifo->count ==0){
        printf("fifo is empty \n");
        return fifo_empty;
    }
    temp = fifo->tail;
    printf("\n =====FIFO__PRINT===== \n");
    for(i=0 ; i<fifo->count ; i++){
        printf("\t %x \n",*temp);
        temp++;//address increment
    }
    printf("\n ======================== \n");
}
