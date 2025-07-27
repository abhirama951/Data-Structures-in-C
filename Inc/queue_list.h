#ifndef QUEUE_LIST_H_
#define QUEUE_LIST_H_

#include <stdlib.h>
#include <stdint.h>
#include "linked_list.h"

struct LQueue{
	int16_t size;
	int16_t count;
	int16_t front;
	int16_t rear;
	node *head;
};

typedef struct LQueue lqueue;

lqueue* lqueue_create(int16_t size);
void enqueue_l(lqueue *lq, int16_t val);
int16_t dequeue_l(lqueue *lq);
int8_t lqueue_isEmpty(lqueue *lq);
int8_t lqueue_isFull(lqueue *lq);
void free_lqueue(lqueue *lq);
#endif
