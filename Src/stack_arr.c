#include "stack_arr.h"

stack* stack_init(int8_t size){
	stack *stck;
	stck = (stack*)(malloc(sizeof(stack)));
	stck->MAXSIZE = size;
	stck->array = (int8_t*)(malloc(sizeof(int8_t)*size));
	stck->top = -1;
	return stck;
}

void stack_push(stack *stck, int8_t val){
	if(stck->MAXSIZE-1 == stck->top){
		printf("ERROR: Stack is full\n");
		return;
	}
	stck->top++;
	stck->array[stck->top] = val;
}

void stack_print(stack *stck){
	int8_t i;
	if(-1 == stck->top){
		printf("ERROR: Stack is empty\n");
		return;
	}
	for(i=0; i<=stck->top; i++){
		printf("%d  ", stck->array[i]);
	}
	printf("\n");
}

int8_t stack_pop(stack *stck){
	if(-1 == stck->top){
		printf("ERROR: Stack is empty\n");
		return -1;
	}
	stck->top--;
	return(stck->array[stck->top+1]);
}

int8_t stack_isFull(stack *stck){
	if(stck->MAXSIZE-1 == stck->top){
		return 1;
	}
	return 0;
}

int8_t stack_isEmpty(stack *stck){
	if(-1 == stck->top){
		return 1;
	}
	return 0;
}

void stack_free(stack *stck){
	free(stck->array);
	free(stck);
}
