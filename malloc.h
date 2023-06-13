#ifndef _MALLOC_H_
#define _MALLOC_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define METADATA 0x10
#define ALIGNMENT(size) (size + (METADATA - (size % METADATA)))
#define shift_address(addr, size) \
	((void *)((char *)(addr) + (size)))

/* ----- naive_malloc.c ----- */
void *naive_malloc(size_t size);

/* ----- malloc.c ----- */
void *_malloc(size_t size);

/* ----- free.c -----*/
void _free(void *ptr);

#endif /* _MALLOC_H_ */
