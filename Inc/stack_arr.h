#ifndef STACK_ARR_H
#define STACK_ARR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Stack{
    int8_t MAXSIZE;
    int8_t *array;
    int8_t top;
};

typedef struct Stack stack;

stack* stack_init(int8_t size);
void stack_push(stack *stck, int8_t val);
int8_t stack_pop(stack *stck);
int8_t stack_isEmpty(stack *stck);
int8_t stack_isFull(stack *stck);
void stack_print(stack *stck);
void stack_free(stack *stck);

#endif
