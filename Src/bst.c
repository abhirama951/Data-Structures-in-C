#include "bst.h"

root* createRoot(void){
	root *temp;
	temp = (root*)malloc(sizeof(root));
	temp->left = NULL;
	temp->right = NULL;
	temp->data = '\0';

	return temp;
}

void insertTree(root *rt, int8_t val){
	root *itr;
	itr = rt;

	while(1){
		if('\0' == itr->data){
			itr->data = val;
			return;
		}

		else{
			if(val <= itr->data){
				if(NULL == itr->left){
					itr->left = createRoot();
				}
				itr = itr->left;
			}
			else{
				if(NULL == itr->right){
					itr->right = createRoot();
				}
				itr = itr->right;
			}
		}
	}
}

root* searchTree(root *rt, int8_t val){
	root *itr;
	itr = rt;

	while(1){
		if('\0' == itr->data){
			return NULL;
		}

		else{
			if(val == itr->data){
				return itr; 
			}

			else if(val < itr->data){
				if(NULL == itr->left){
					return NULL;
				}
				itr = itr->left;
			}

			else if(val > itr->data){
				if(NULL == itr->right){
					return NULL;
				}
				itr = itr->right;
			}
		}
	}
}

void inorder(root *rt, stack *stck){
	root *itr;
	itr = rt;

	if(NULL != itr->left){
		inorder(itr->left, stck);
	}

	stack_push(stck, itr->data);

	if(NULL != itr->right){
		inorder(itr->right, stck); 
	}
}

void preorder(root *rt, stack *stck){
	root *itr;
	itr = rt;

	stack_push(stck, itr->data);
	
	if(NULL != itr->left){
		preorder(itr->left, stck);
	}

	if(NULL != itr->right){
		preorder(itr->right, stck); 
	}
}

void postorder(root *rt, stack *stck){
	root *itr = rt;

	if(NULL != itr->left){
		postorder(itr->left, stck);
	}

	if(NULL != itr->right){
		postorder(itr->right, stck); 
	}

	stack_push(stck, itr->data);
}

void freeTree(root *rt){
	root *itr = rt;

	if(NULL != itr->left){
		freeTree(itr->left);
	}

	if(NULL != itr->right){
		freeTree(itr->right);
	}

	free(itr);
}

void deleteTree(root **rt, int8_t val){
	root *itr = *rt;
	stack *stck;
	stck = stack_init(100);

	preorder(itr, stck);
	freeTree(itr);

	*rt = createRoot();

	while(!stack_isEmpty(stck)){
		insertTree(*rt, stack_pop(stck));
	}
}
