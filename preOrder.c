#include<stdio.h>
#include<stdlib.h>

int top = -1;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data){
	struct node *tmp_node = (struct node *)malloc(sizeof(struct node));
	tmp_node->data = data;
	tmp_node->left = NULL;
	tmp_node->right = NULL;
	return (tmp_node);
}

struct node* nodeStack[20];

void preOrder(struct node* root){
	if (root==NULL)
		return;
	
	top = top + 1;
	nodeStack[top] = root;
	
	while ((top+1) > 0) {
	
		struct node *root = nodeStack[top];
		printf("%d, ", root->data);
		top = top - 1;
		
		if (root->left){
			top = top + 1;
			nodeStack[top] = root->left;
			
		}
		
		if (root->right){
			top = top + 1;
			nodeStack[top] = root->right;
		}
		
	}
}

int main() {
	struct node *root = newNode(10);
	root->left = newNode(8);
	root->right = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(5);
	root->right->left = newNode(2);
	
	preOrder(root);
	printf("\n");
	return 0;
}
