#include "fifo.h"

#define buffer1_length 5
element_t buffer1[buffer1_length];

void main(){
    FIFO_BUF_t uart_fifo;
    uint8 i=0 , temp=0;
    if (fifo_init(&uart_fifo,buffer1 ,buffer1_length)== fifo_no_error){
        printf("fifo init----done----\n");
    }
    for(i=0 ;i<6 ;i++){
        printf("fifo enqueue(%x)\n",i);
        if (fifo_enqueue(&uart_fifo ,&i)== fifo_no_error){
            printf("fifo enqueue(%x)----done----\n",i);
        }else{
            printf("fifo enqueue(%x)----Failed----\n",i);
        }
    }

    fifo_print(&uart_fifo);
    fifo_dequeue(&uart_fifo ,&temp);
    printf("fifo dequeue: data=%X\n",temp);
    fifo_dequeue(&uart_fifo ,&temp);
    printf("fifo dequeue: data=%X\n",temp);
    for(i=0;i<2;i++){
        if (fifo_dequeue(&uart_fifo ,&i)== fifo_no_error){
            printf("fifo dequeue(%x)----done----\n",i);
        }else{
            printf("fifo dequeue(%x)----Failed----\n",i);
        }
    }
    fifo_print(&uart_fifo);
}








