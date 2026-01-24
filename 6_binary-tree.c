#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node*newNode(int data){
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;

}

int main(){
    //Root
    struct node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(6);
    root->right->right = newNode(7);    

    printf("Root Node: %d\n", root->data);
    printf("Left Child of Root: %d\n", root->left->data);
    printf("Right Child of Root: %d\n", root->right->data);
    printf("Left Child of Left Child of Root: %d\n", root->left->left->data);
    printf("Right Child of Left Child of Root: %d\n", root->left->right->data);
    printf("Left Child of Right Child of Root: %d\n", root->right->left->data);
    printf("Right Child of Right Child of Root: %d\n", root->right->right->data);

    return 1;
}
