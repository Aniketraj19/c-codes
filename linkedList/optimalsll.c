//optimal code for single linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};


struct node* add_at_end(struct node *ptr,int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data =data;
    temp->link =NULL;

    ptr->link = temp;
    
    return temp;
}
struct node* add_begg(struct node *head,int d)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}


int main()
{
    struct node *ptr = NULL;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 59;
    head ->link = NULL;

    ptr = head;
    ptr = add_at_end(ptr,69);
    ptr = add_at_end(ptr,79);
    ptr = add_at_end(ptr,89);
    ptr = add_at_end(ptr,99);

    add_begg(head,5);

    ptr = head;
    while(ptr != NULL)
    {
        printf("data is %d \n",ptr->data);
        ptr = ptr->link;
    }
}