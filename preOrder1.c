#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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

int main() {
	struct node *root = newNode(10);
	root->left = newNode(8);
	root->right = newNode(2);
	
	printf("%d, \n", *((int*)root->left));
	
	return 0;
}
