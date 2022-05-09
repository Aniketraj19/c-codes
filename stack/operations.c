#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int data)
{
    if (isFull(top))
    {
        printf("Stack Overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("stack underfow");
    }
    else
    {
        struct node *n = *top;
        *top = n->next;
        int ele = n->data;
        free(n);
        return ele;
    }
}

void traversal(struct node *top)
{
    int i = 1;
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("the data in position %d is %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

int main()
{
    struct node *top = NULL;
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    traversal(top);
    int element = pop(&top);
    printf("popped data is %d \n", element);
    traversal(top);
    return 0;
}