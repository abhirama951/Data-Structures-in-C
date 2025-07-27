#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Declaring Node structure
struct Node{
    int8_t data;
	struct Node* next;
};

//Defining type node
typedef struct Node node;

node* create_ll(void);
void insert_ll(node** head, int8_t data, int8_t idx);
void print_ll(node* head);
void delete_ll(node** head, int8_t idx);
void getValue_ll(node* head, int8_t idx);
void freeLL(node** head);
 
#endif
