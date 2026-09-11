#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


int main(){
    struct node *head=NULL;

    struct node *head;
    head = malloc(sizeof(struct node));
    head->data=0;
    head->next=NULL;

    struct node *first;
    first = malloc(sizeof(struct node));
    first->data=1;
    first->next=head;

    struct node *second;
    second = malloc(sizeof(struct node));
    second->data=2;
    second->next=first;

    // Traversal
    struct node *temp = head;
    while(temp!=NULL){
        
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;

}
