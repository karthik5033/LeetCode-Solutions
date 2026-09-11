#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evalRPN(char **tokens, int tokensSize)
{

    long stack[tokensSize];
    int top = -1;

    for (int i = 0; i < tokensSize; i++)
    {
        char *token = tokens[i];

        if (strcmp(token, "+") == 0)
        {
            long b = stack[top--];
            long a = stack[top--];
            stack[++top] = a + b;
        }
        else if (strcmp(token, "-") == 0)
        {
            long b = stack[top--];
            long a = stack[top--];
            stack[++top] = a - b;
        }
        else if (strcmp(token, "*") == 0)
        {
            long b = stack[top--];
            long a = stack[top--];
            stack[++top] = a * b;
        }
        else if (strcmp(token, "/") == 0)
        {
            long b = stack[top--];
            long a = stack[top--];
            stack[++top] = a / b;
        }
        else
        {
            stack[++top] = (long)atoi(token);
        }
    }

    return (int)stack[top];
}

int main()
{
    char *tokens1[] = {"2", "1", "+", "3", "*"};
    int size1 = 5;
    printf("Result 1: %d\n", evalRPN(tokens1, size1));
    char *tokens2[] = {"4", "13", "5", "/", "+"};
    int size2 = 5;
    printf("Result 2: %d\n", evalRPN(tokens2, size2));

    char *tokens3[] = {"10", "6", "9", "3", "+", "-11", "", "/", "", "17", "+", "5", "+"};
    int size3 = 13;
    printf("Result 3: %d\n", evalRPN(tokens3, size3));

    return 0;
}