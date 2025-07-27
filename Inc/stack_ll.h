#ifndef STACK_LL_
#define STACK_LL_

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "linked_list.h"

struct LLstack{
	int8_t maxsize;
	node* head;
	int8_t top;
};

typedef struct LLstack stackL;

stackL* create_lstack(int8_t size);
void lstack_push(stackL *stck, int8_t val);
int8_t lstack_pop(stackL *stck);
void lstack_print(stackL *stck);
int8_t lstack_isEmpty(stackL *stck);
int8_t lstack_isFull(stackL *stck);
void free_lstack(stackL *stck);
#endif
