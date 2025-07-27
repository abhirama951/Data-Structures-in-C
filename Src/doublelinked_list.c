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

int main(){
	node *head;
	insert_dll(&head, 3, 0);
	insert_dll(&head, 4, 1);
	insert_dll(&head, 2, 1);
	insert_dll(&head, 5, 2);
	insert_dll(&head, 6, 3);
	delete_dll(&head, 0);
	delete_dll(&head, 3);
	delete_dll(&head, 2);
	print_dll(head);
}

void insert_dll(node **head, int8_t val, int8_t idx){
	int8_t i;
	node *temp, *itr;
	itr = *head;
	temp = (node*)malloc(sizeof(node));
	temp->data = val;
	if(idx == 0){
		temp->prev = NULL;
		temp->next = *head;
		*head = temp;
	}
	else{
		for(i=0; i<idx-1; i++){
			itr = itr->next;
		}
		temp->next = itr->next;
		temp->prev = itr;
		if(itr->next != NULL){
			(itr->next)->prev = temp;		
		}
		itr->next = temp;				
	}
}

void print_dll(node *head){
	printf("Linked List : ");
	while(head){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

void delete_dll(node **head, int8_t idx){
	int8_t i;
	node *itr, *temp;
	itr = *head;
	if(0==idx){
		temp = *head;
		*head = itr->next;
		free(temp);
	}
	else{
		for(i=0; i<idx-1; i++){
			itr = itr->next;
		}
		temp = itr->next;
		itr->next = temp->next;
		if(temp->next){
			(temp->next)->prev = itr;
		}
		free(temp);
	}
}

void free_dll(node *head){
	node *temp;
	while(head){
		head = head->next;
	}

	temp = head->prev;
	while(temp){
		temp = head->prev;
		free(head);
		head = temp;	
	}	
}
