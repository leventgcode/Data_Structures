#include <stdio.h>
#include <stdlib.h>

//Queue Node
struct node {
    int data;
    struct node* next;
};

//Front & Rear
struct node* front = NULL;
struct node* rear = NULL;

//Enqueue
int enqueue(int data){
//Queue is empty
if(front==NULL)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    front = rear = new;
    return 1;
}
//Queue is not empty
else{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    rear->next = new;
    rear = new;
    return 1;
}
}

//Display Queue
int display(){
   
    //Queue is empty
    if(front==NULL){
        printf("Queue is empty\n");
        return 1;
    }
    struct node* index = front;
    while(index != NULL){
        printf("%d ", index->data);
        index = index->next;
    }
    printf("\n");
    return 1;
}
//Main
int main(){

    enqueue(5);
    enqueue(10);
    enqueue(15);
    
    display();
    return 1;
}