#include "linked_list.h"

void insert_ll(node** head, int8_t dat, int8_t id){
	int8_t i;

	//Create a new node to be inserted into structure
	node *temp, *itr;
	temp = (node*)malloc(sizeof(node));
	itr = *head;
	temp->data = dat;

	if(0==id){
		temp->next = *head;
		*head = temp;
	}
	else{
		for(i=0; i<id-1; i++){
			itr = itr->next;
		}	
		temp->next = itr->next;
		itr->next = temp;
	}	
}

void print_ll(node* head){
	while(head){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\b\b\n");
}

void delete_ll(node** head, int8_t id){
	int8_t i=0;
	node *itr, *temp;
	itr = *head;
	if(id = 0){
		*head = itr->next;
		free(head);
	}
	else{
		for(i=0; i<id-1; i++){
			itr = itr->next;
		}
		temp = itr->next;
		itr->next = temp->next;
		free(temp);
	}
}

int8_t getValue_ll(node* head, int8_t idx){
	int8_t i=0;
	for(i=0; i<idx; i++){
		head = head->next;
	}
	return (head->data);
}

void freeLL(node** head){
	int8_t i=0;
	node *temp, *itr;
	itr = *head;
	while(itr){
		temp = itr->next;
		free(itr);
		itr = temp;
	}
}

node* create_ll(void){
	node* temp;
	temp = (node*)(malloc(sizeof(node)));
	temp = NULL;
	return temp;
}
