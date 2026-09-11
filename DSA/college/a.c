// implementation of stack

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct
{
    char data[SIZE];
    int top;
} Stack;

void push(Stack *s, char c)
{
    if (s->top == SIZE - 1)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    s->data[++(s->top)] = c;
}

char pop(Stack *s)
{
    if (s->top == -1)
    {
        return '\0'; // Indicates stack is empty
    }
    return s->data[(s->top)--];
}

int isMatchingPair(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isBalanced(const char *expr)
{
    Stack s;
    s.top = -1;
    for (int i = 0; expr[i] != '\0'; i++)
    {
        char c = expr[i];
        if (c == '(' || c == '{' || c == '[')
        {
            push(&s, c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            char open = pop(&s);
            if (!isMatchingPair(open, c))
            {
                return 0; // Not balanced
            }
        }
    }
    return s.top == -1; // Balanced if stack is empty
}

int main()
{
    char expr[SIZE];
    printf("Enter an expression: ");
    scanf("%s", expr);
    if (isBalanced(expr))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");
    return 0;
}

// linked list implementation

int main1(){
    int i ;
}  