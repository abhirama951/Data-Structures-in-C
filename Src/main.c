#include <stdio.h>
#include "linked_list.h"
#include "stack_arr.h"
#include "stack_ll.h"
#include "queue_array.h"

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
	freeLL(&head);*/

	/*Implementation of stack using arrays
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
	stack_print(stck);*/

	/*Implementation of stack using linked list
	printf("Implementation of stacks using linked list......\r\n");
	stackL *stck;
	stck = create_lstack(100);
	lstack_push(stck, 5);
	lstack_push(stck, 4);
	lstack_push(stck, 3);
	lstack_push(stck, 5);
	lstack_print(stck);
	printf("%d\n", lstack_pop(stck));
	free_lstack(stck);*/

	//Implementation of queue using array
	queue* q;
	q = queue_create(5);
	enqueue(q, 3);
	enqueue(q, 4);
	enqueue(q, 5);
	enqueue(q, 6);
	enqueue(q, 7);
	queue_print(q);
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	enqueue(q, 4);
	queue_print(q);
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	free_queue(q);
	return 0;
}
