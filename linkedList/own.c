#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node * add_begg(struct node *head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

void count_of_node(struct node *head)
{
    int count = 0;
    struct node *ptr = NULL;
    ptr = head;
    if(head == NULL)
    {
        printf("Liked list is empty");
        exit(1);
    }
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("Number of nodes is : %d\n",count);

}

void print_data(struct node *head)
{
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("Data is : %d \n",ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->data =55;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current ->data = 66;
    current -> link = NULL;
    head ->link = current;

    current = malloc(sizeof(struct node));
    current -> data = 77;
    current -> link = NULL;
    head->link->link = current;

    add_begg(head,3);
    count_of_node(head);
    print_data(head);
    return 0;
}