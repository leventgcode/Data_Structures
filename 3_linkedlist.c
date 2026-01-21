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

//Add Note to Head
int addNodeHead(int data)

{ if(head == NULL){

    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    head = tail = new;  
}
else{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = head;

    head = new;}
}

//Print
int print(){
    struct node *index = head;
    while(index != NULL){
        printf("%d\n", index->data);
        index = index->next;
    }
    return 1;
}

//Delete Node
int delete(int data){
    struct node *index = head;
    struct node *prev = NULL;

    while(index != NULL){
        if(index->data == data){
            if(prev == NULL){
                head = index->next;
                free(index);
                return 1;
            }
            else{
                prev->next = index->next;
                free(index);
                return 1;
            }
        }
        prev = index;
        index = index->next;
    }
    return -1; //Not Found
}
int main(){

    addNode(10);
    addNode(20);
    addNode(30);

    addNodeHead(15);

    print();
    return 1;
}