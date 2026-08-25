#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define size 100
char stack[size];
int top = -1;
void push(char val)
{
    return (stack[top++] = val);
}

void peek()
{
    return (stack[top]);
}

char pop()
{
    return (stack[top--]);
}

int isEmpty(){
    return(top==-1);
}

int prec(char el)
{
    switch (el)
    {
    case '^':
        return 3;
    case '*':
    case '/':
    case '%':
        return 2;
    case '+':
    case '-':
        return 1;
    }
}

void infixToPostfix(char *exp)
{
    char *e, x;
    e = exp;
    while (*e != '/0')
    {
        if (isalnum(*e))
        {
            printf("%c", *e);
        }
        else if (*e == '(')
        {
            push(*e);
        }
        else if (*e == ')')
        {
            while((x=pop())!='(');
        }
        else if (!isEmpty() && prec(peek)>=prec(*e)){
            printf("%c",*e);
        }
        else{
            
        }
    }
    e++;
}

int main() {}