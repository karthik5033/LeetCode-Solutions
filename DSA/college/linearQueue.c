#include <stdio.h>
#include <stdlib.h>
#define size 5
int queue[size];

int front = -1, rear = -1;
int isFull()
{
    return (front == size - 1 || rear == size - 1);
}

int isEmpty()
{
    return (front == -1 || front > rear);
}

void enQueue(int value)
{
    if (isFull())
    {
        printf("Queue overflow....!");
    }
    else
    {
        if(front=-1)front = 0;
        rear++;
        queue[rear] = value;
        printf("\nThe element %d is added to the Queue at position %d \n",value,rear);
    }
}

void dequeue(int value)
{
    if(isEmpty()){
        printf("Queue underflow....!");
    }
    else{
        printf("element removed from queue is %d",queue[front]);
        front++;
    }
}