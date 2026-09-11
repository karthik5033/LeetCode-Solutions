#include<stdio.h>
#include<stdlib.h>
// #include<stdlib.h>
// using namespace std;
#define size 5

 typedef struct Node{
    int data;
    struct Node *next;
 };
 Node *head=NULL;
 Node *top=NULL;

 void push(int val){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("stack overflow");
        return;
    }
    // If malloc() couldn’t find free memory, it returns NULL.
    newnode->data=val;
    newnode->next=top;
    top=newnode;
    printf("pushed %d",newnode->data);
 }
