#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void toPush(struct stack *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("Stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int toPop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *s = malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    toPush(s, 66);
    int val;
    val = toPop(s);
    printf("the popped data is %d\n", val);

    printf("%d \n", isEmpty(s));
    printf("%d \n", isFull(s));
}