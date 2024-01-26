//Author: Amr_Afifi
#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include <stdlib.h>
#include "std_types.h"

// type definitions 
typedef struct {
	uint32 length ;
	uint32* base ;
	uint32* head ;
	uint32 count ;
}LIFO_BUF_t;

typedef enum {
	lifo_no_error,
	lifo_fully,
	lifo_empty,
	lifo_null
}LIFO_STATUS;
//APIs
LIFO_STATUS lifo_push_item(LIFO_BUF_t* lifo_buf , uint32 item);
LIFO_STATUS lifo_pop_item(LIFO_BUF_t* lifo_buf , uint32* item);
LIFO_STATUS lifo_init(LIFO_BUF_t* lifo_buf , uint32* buf, uint32 length); 

#endif