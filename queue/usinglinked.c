#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;

void traversal(struct node *f)
{
    printf("printing the present elements \n");
    struct node *ptr = f;
    while (ptr != NULL)
    {
        printf("data is -> %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int value)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("the queue is empty");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    enqueue(66);
    enqueue(99);
    enqueue(88);
    enqueue(77);
    printf("dequeueing element %d \n", dequeue());
    printf("dequeueing element %d \n", dequeue());
    printf("dequeueing element %d \n", dequeue());
    traversal(f);
}
