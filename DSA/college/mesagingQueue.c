#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 5
int front=-1,rear=-1;
char queue[size];
int isFull()
{
    return (rear == size - 1 || front == size - 1);
}

int isEmpty(){
    return(rear<front  )
}
int main(){

    
}