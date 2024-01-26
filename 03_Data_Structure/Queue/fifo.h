// ENG: Amr_Afifi
#ifndef _FIFO_H_
#define _FIFO_H_

#include <stdio.h>
#include <stdlib.h>
#include "std_macro.h"

//configuration.......
// select the element type (uint8 , uint16 , uint32 .....)
#define element_t  uint8

//FIFO data type
typedef struct {
    uint32 length;
    uint32 count ;
    element_t* base ;
    element_t* tail ;
    element_t* head ;
}FIFO_BUF_t;

typedef enum {
    fifo_no_error,
    fifo_full,
    fifo_empty,
    fifo_null
}BUF_STATUS_t;

//FIFO APIs
BUF_STATUS_t lifo_init (FIFO_BUF_t*fifo ,element_t* buf , uint32 length);
BUF_STATUS_t fifo_is_buf_full (FIFO_BUF_t* fifo);
BUF_STATUS_t fifo_enqueue (FIFO_BUF_t* fifo ,element_t* item);
BUF_STATUS_t fifo_dequeue (FIFO_BUF_t* fifo ,element_t* item);
void fifo_print(FIFO_BUF_t* fifo);

#endif // _FIFO_H_
