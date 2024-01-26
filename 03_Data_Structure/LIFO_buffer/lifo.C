
#include "lifo.h"

LIFO_STATUS lifo_push_item(LIFO_BUF_t* lifo_buf , uint32 item){
	// check lifo is valid 
	if (!lifo_buf->base || !lifo_buf->head){
		return lifo_null;
	}
	
	// check lifo is full 
	//if (lifo_buf->head >= (lifo_buf->base + (lifo_buf->length *4 ) ))
	if (lifo_buf->count == lifo_buf->length){
		return lifo_fully;
	}
	
	// push item 
	*(lifo_buf->head)= item;
	lifo_buf->head++;
	lifo_buf->count++;
}

LIFO_STATUS lifo_pop_item(LIFO_BUF_t* lifo_buf , uint32* item){
	//check lifo is valid 
	if (!lifo_buf->base || !lifo_buf->head){
		return lifo_null;
	}
	
	//check lifo is empty 
	if (lifo_buf->count ==0){
		return lifo_empty;
	}
	
	//pop item
	lifo_buf->head--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;
	
	return lifo_no_error;
}

LIFO_STATUS lifo_init(LIFO_BUF_t* lifo_buf , uint32* buf , uint32 length){
	if(buf == NULL){
		return lifo_null;
	}
	
	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;
	return lifo_no_error;
}