#include "stack_ll.h"

stackL* create_lstack(int8_t size){
	stackL* temp;
	temp = (stackL*)(malloc(sizeof(stackL)));
	temp->maxsize = size;
	temp->head = create_ll();
	temp->top = -1;
	return temp;
}

void lstack_push(stackL *stck, int8_t val){
	if(stck->maxsize-1 == stck->top){
		printf("ERROR: Stack overflow\r\n");
	}
	stck->top++;
	insert_ll(&stck->head, val, stck->top);
}

int8_t lstack_pop(stackL *stck){
	int8_t temp;
	temp = getValue_ll(stck->head, stck->top);
	delete_ll(&stck->head, stck->top);
	return temp;
}

void lstack_print(stackL *stck){
	print_ll(stck->head);
}

int8_t lstack_isEmpty(stackL *stck){
	if(stck->top==-1){
		return 1;
	}
	return 0;
}

int8_t lstack_isFull(stackL *stck){
	if(stck->top == stck->maxsize-1){
		return 1;
	}		
	return 0;
}

void free_lstack(stackL *stck){
	freeLL(&stck->head);
	free(stck);
}
