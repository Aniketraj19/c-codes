#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
} *front = NULL, *rear = NULL;

int isEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert(int key)
{
    if (isEmpty())
    {
        front = (struct queue *)malloc(sizeof(struct queue));
        front->data = key;
        front->next = NULL;
        rear = front;
    }
    else
    {
        struct queue *ptr = (struct queue *)malloc(sizeof(struct queue));
        ptr->data = key;
        ptr->next = NULL;
        rear->next = ptr;
        rear = ptr;
    }
}
void display(struct queue *ptr)
{
    if (ptr != NULL)
    {
        display(ptr->next);
        printf("data is - %d \n",ptr->data);
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display(front);
}