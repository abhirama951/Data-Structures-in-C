#ifndef DOUBLELINKED_LIST_H_
#define DOUBLELINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Node{
    int8_t data;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node node;

void insert_dll(node **head, int8_t val, int8_t idx);
void print_dll(node *head);
void delete_dll(node **head, int8_t idx);
void free_dll(node *head);
#endif
