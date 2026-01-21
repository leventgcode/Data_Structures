#include <stdio.h>
#include <stdlib.h>
  
//Linked List
struct node{
    int data;
    struct node* next;
};

// Head & Tail
struct node* head = NULL;
struct node* tail = NULL;

//Add Node
int addNode(int data){
    
//Linked List is empty
if(head == NULL){

    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    head = tail = new;
}
//Linked List is not empty
else{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    tail->next = new;
    tail = new;
}

    return 1;
}


int main(){

    addNode(10);
    addNode(20);
    addNode(30);

    return 1;
}