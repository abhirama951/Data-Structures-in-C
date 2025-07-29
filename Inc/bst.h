#ifndef BST_H_
#define BST_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "stack_arr.h"

struct Root{
	int8_t data;
	struct Root *left;
	struct Root *right;
};

typedef struct Root root;

root* createRoot(void);
void insertTree(root *rt, int8_t val);
root* searchTree(root *rt, int8_t val);
void deleteTree(root **rt, int8_t val);
void inorder(root *rt, stack* stck);
void preorder(root *rt, stack *stck);
void postorder(root *rt, stack *stck);
void freeTree(root *rt);

#endif
