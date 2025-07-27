#include "linked_list.h"

int main(){
	node* head;
	head = create_ll();
	insert_ll(&head, 6, 0);
	insert_ll(&head, 3, 1);
	print_ll(head);
}
