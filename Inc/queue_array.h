#ifndef QUEUE_ARRAY_H_
#define QUEUE_ARRAY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Queue{
	int16_t front;
	int16_t rear;
	int16_t *array;
	int16_t size;
};

typedef struct Queue queue;

queue* queue_create(int16_t size);
void enqueue(queue *q, int16_t val);
int16_t dequeue(queue* q);
void queue_print(queue *q);
void free_queue(queue *q);
int8_t queue_isEmpty(queue *q);
int8_t queue_isFull(queue *q);

#endif
