#include <stdio.h>
#include <stdlib.H>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create()
{
    int val;
    printf("Enter the value of the nodes \n");
    scanf("%d", &val);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = val;
    head->next = head;
    printf("Enter 0 to terminate the creation of the linked list \n");
    struct node *p = head;
    while (1)
    {
        scanf("%d", &val);
        if (val != 0)
        {
            p->next = (struct node *)malloc(sizeof(struct node));
            p = p->next;
            p->data = val;
            p->next = head;
        }
        else
        {
            break;
        }
    }
}

void insert_bef_head(int key)
{
    struct node *t = head;
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = key;
    ptr->next = head;
    do
    {
        t = t->next;
    } while (t->next != head);
    t->next = ptr;
    
}

void display()
{
    struct node * temp = head;
    do
    {
        printf("the data is - %d \n",temp->data);
        temp = temp->next;
    } while (temp!=head);
    printf("%d\n",head);
    printf("%d",temp);
    
}

int main()
{
    create();
    display();
    insert_bef_head(10);
    display();
}