#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *left;
        struct node *right;
};

struct node *create(){
        struct node *newnode;
        newnode= (struct node *)malloc(sizeof(struct node));
        int x,choice;
        //printf("\nenter -1 to exit\n");
        //printf("\nenter 1 to create a node\n");
        printf("\n Enter your choice:\n");
        scanf("%d", &choice);
        if(choice==0){
                return 0;
        }
        else{
                printf("\nenter the data:");
                scanf("%d", &x);
                newnode->data= x;
                printf("\nenter the left child:");
                newnode->left= create();
                printf("\n enter the right child:" );
                newnode->right= create();
                return newnode;
        }
}

void preorder(struct node *root){
        printf("\npreorder:\n");
        if(root==0){
                return;
        }
        else{
                printf("%d-> ",root->data);
                preorder(root->left);
                preorder(root->right);
        }
}
void postorder(struct node*root){
        printf("\n postorder:\n");
        if(root==0){
                return;
         }
        else{
                postorder(root->left);
                postorder(root->right);
                printf("%d-> ",root->data);
        }
}

void inorder(struct node *root){
        printf("\ninorder:\n");
          if(root==0){
                  return;
          }
          else{
                //  printf("%d-> ",root->data);
                  inorder(root->left);
                  inorder(root->right);
                  printf("%d-> ",root->data);
         }
}
void main(){
        //int newnode;
        struct node *root;
        root= 0;
        root=create();
        //preorder(root);
        //postorder();
        //inorder();
}
