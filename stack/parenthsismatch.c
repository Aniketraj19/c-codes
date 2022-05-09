#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char data;
    struct stack *next;
} *head = NULL;

int isEmpty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
        return 0;
}
