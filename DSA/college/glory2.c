#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};typedef struct Node node;

int main(){
    node *head=NULL;
    node *n1,*n2,*n3,*n4,*n5;
    n1 = malloc(sizeof(node));
    n2 = malloc(sizeof(node));
    n3 = malloc(sizeof(node));
    n4 = malloc(sizeof(node));
    n5 = malloc(sizeof(node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    n5->data = 50;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    head=n1;

    

    // Traversing
    node *temp=head;
    while (temp!=NULL){
        
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    return 0;
}


