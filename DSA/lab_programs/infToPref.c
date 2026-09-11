#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define size 100

char stack[size];
int top = -1;
int isEmpty() { return (top == -1); }
int isFull() { return (top == size - 1); }

void push(char val)
{
    if (isFull())
    {
        printf("Stack overflow");
    }
    else
    {
        stack[top++] = val;
    }
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack underflow");
    }
    else
    {
        return stack[top--];
    }
}

char reverseString(char str[])
{
    char ch;
    for (int i = 0; i < strlen(str); i++)
    {
        ch = str[i];
        push(ch);
    }
    for (int i = 0; i < strlen(str); i++)
    {
        int p = pop();
        str[i] = p;
    }
}

void infxToPrefx(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] = '(')
        {
            str[i] = ')';
        }
        if (str[i] = ')')
        {
            str[i] = '(';
        }
        char rev = reverseString(str);
         
        void infixToPostfix(char rev){
            return;
        }
    }
    
}