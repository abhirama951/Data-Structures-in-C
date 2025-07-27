#include "queue_list.h"

lqueue* lqueue_create(int16_t size){
	lqueue *temp;
	temp = (lqueue*)malloc(sizeof(lqueue));
	temp->size = size;
	temp->count = 0;
	temp->head = create_ll();
	temp->front = -1;
	temp->rear = -1;
}

int8_t lqueue_isEmpty(lqueue *lq){
	if(lq->rear == lq->front){
		return 1;
	}
	return 0;
}

int8_t lqueue_isFull(lqueue *lq){
	if(lq->size == lq->count){
		return 1;
	}
	return 0;
}

void enqueue_l(lqueue *lq, int16_t val){
	if(lqueue_isFull(lq)){
		printf("Queue Overflow\r\n");
		return;
	}

	lq->rear++;
	insert_ll(&lq->head, val, lq->rear);
	lq->count++;
	print_ll(lq->head);
}

int16_t dequeue_l(lqueue *lq){
	int16_t temp;
	if(lqueue_isEmpty(lq)){
		printf("Queue is empty\r\n");
		return -1;
	}
	
	lq->front++;
	temp = getValue_ll(lq->head, lq->front);
	delete_ll(&lq->head, lq->front);
	lq->front--;
	--lq->rear;
	lq->count--;
	return temp;
	
}


void free_lqueue(lqueue *lq){
	freeLL(&lq->head);
	free(lq);
}
