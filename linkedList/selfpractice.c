#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void travfor(struct node* head)
{
    struct node* ptr = head;
    while(ptr!=NULL)
    {
        printf("Data is - %d \n",ptr->data);
        ptr = ptr->next;
    }
}

void travrev(struct node* end)
{
    
    struct node* ptr = end;
    do
    {
        printf("Data is - %d \n",ptr->data);
        ptr=ptr->prev;
    }while(ptr->prev!= NULL);

}


int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 50;
    head->prev = NULL;

    struct node *second = (struct node *)malloc(sizeof(struct node));
    second->data = 60;
    second->prev = head;
    head->next= second;

    struct node *third = (struct node *)malloc(sizeof(struct node));
    third->data = 70;
    third->prev = second;
    second->next = third;

    struct node *end = (struct node *)malloc(sizeof(struct node));
    end->data=80;
    end->prev=third;
    end->next = NULL;

    travfor(head);
    travrev(end);
    
    return 0;
}