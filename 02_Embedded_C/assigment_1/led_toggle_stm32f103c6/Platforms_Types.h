/*
 * Platforms_Types.h
 *
 *  Created on: Dec 27, 2023
 *      Author: Amro
 */

#ifndef PLATFORMS_TYPES_H_
#define PLATFORMS_TYPES_H_

#include <stdio.h>

typedef unsigned char         uint8;
typedef signed char           sint8;
typedef unsigned short        uint16;
typedef signed short          sint16;
typedef unsigned long         uint32;
typedef signed long           sint32;
typedef unsigned long long    uint64;
typedef signed long long      sint64;

typedef volatile uint8        vuint8;
typedef volatile sint8        vsint8;
typedef volatile uint16       vuint16;
typedef volatile sint16       vsint16;
typedef volatile uint32       vuint32;
typedef volatile sint32       vsint32;
typedef volatile uint64       vuint64;
typedef volatile sint64       vsint64;

typedef unsigned int          bool;

typedef float   			  float32;
typedef double                float64;

#endif /* PLATFORMS_TYPES_H_ */
