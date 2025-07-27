#include "queue_array.h"

queue* queue_create(int16_t size){
	queue* temp;
	temp = (queue*)malloc(sizeof(queue));
	temp->size = size;
	temp->array = (int16_t *)malloc(sizeof(int16_t)*size);
	temp->front = -1;
	temp->rear = -1;
	return temp;
}

int8_t queue_isEmpty(queue *q){
	if(q->rear == q->front){
		return 1;
	}
	return 0;
}

int8_t queue_isFull(queue *q){
	if((q->rear+1)%(q->size) == q->front){
		return 1;
	}
	return 0;
}

void enqueue(queue *q, int16_t val){
	if(!(queue_isFull(q))){
		q->rear = (q->rear+1)%(q->size);
		q->array[q->rear] = val;
	}
	else{
		printf("Error : Queue Overflow\r\n");
	}
}

int16_t dequeue(queue *q){
	int16_t temp, i;
	if(!(queue_isEmpty(q))){
		q->front = (q->front+1)%(q->size);
		return (q->array[q->front]);
	}
	else{
		printf("Error : Queue Empty\r\n");
	}
}

void queue_print(queue *q){
	int16_t i, j;
	if(queue_isEmpty(q)){
		printf("Error : Queue Empty\r\n");
		return;
	}
	i = q->front+1;
	j = q->rear;

	while(i!=j){
		printf("%d  ", q->array[i]);
		i = (i+1)%(q->size);
	}

	printf("%d", q->array[i]); 

	printf("\n");
}

void free_queue(queue *q){
	free(q->array);
	free(q);
}
