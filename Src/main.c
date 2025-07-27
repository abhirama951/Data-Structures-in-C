#include <stdio.h>
#include "linked_list.h"
#include "stack_arr.h"

int main(){
	/*Implementation of Linked List
	printf("Implementation of linked list.......\r\n");
	node* head;
	head = create_ll();
	insert_ll(&head, 6, 0);
	insert_ll(&head, 3, 1);
	insert_ll(&head, 2, 2);
	insert_ll(&head, 4, 3);
	printf("Created linked list : \r\n");
	print_ll(head);
	printf("Inserting value 1 to 1st index\r\n");
	insert_ll(&head, 1, 1);
	print_ll(head);
	printf("Deleting value at index 3\r\n");
	delete_ll(&head, 3);
	print_ll(head);
	free_ll(&head)*/

	/*Implementation of stack using arrays*/
	printf("Implementation of stacks using arrays.....\r\n");
	stack *stck;
	stck = stack_init(100);
	printf("Creating stack with elements 4, 5, 6, 7, 9\r\n");
	stack_push(stck, 4);
	stack_push(stck, 5);
	stack_push(stck, 6);
	stack_push(stck, 7);
	stack_push(stck, 9);
	stack_print(stck);
	printf("Popping element from stack\r\n");
	printf("%d\r\n", stack_pop(stck));
	stack_print(stck);
	

	return 0;
}
