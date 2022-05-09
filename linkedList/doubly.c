#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head = NULL;

void create()
{
    struct node *t, *last;
    int value;
    printf("Enter the data you want to enter \n");
    scanf("%d", &value);
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = value;
        head->next = head->prev = NULL;
        last = head;
    }
    printf("Enter 0 at any time to terminate \n");
    while (value != 0)
    {
        if (value != 0)
        {
            scanf("%d", &value);
            t = (struct node *)malloc(sizeof(struct node));
            t->data = value;
            t->next = last->next;
            t->prev = last;
            last->next = t;
            last = t;
        }
        else
        break;
    }
}
void inserting_in_between(int data,int index)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp ->data = data;
    int count = 0;
    while(count<index)
    {
        ptr=ptr->next;
        count++;
    }
    temp ->next = ptr->next;
    ptr->next->prev = temp;
    ptr->next = temp;
    temp->prev = ptr;
}
void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("data is - %d\n", p->data);
        p = p->next;
    }
}

int main()
{
    create();
    inserting_in_between(20,3);
    display();
    return 0;
}