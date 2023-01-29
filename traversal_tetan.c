#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;

	struct node* left;
	struct node* right;
};


struct node* create_node(int val){	
	struct node* new_node = malloc(sizeof(struct node));
	
	new_node->data = val;
	new_node->left = NULL;
	new_node->right = NULL;
}


void inorder_traversal(struct node* root){
	if(root == NULL) return;
	printf("%d ->\n", root->data);
}

int main(){
	struct node* root = create_node(1);
	inorder_traversal(root);
	
	return 0;
}
