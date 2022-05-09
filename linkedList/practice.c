#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversing(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Data is - %d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *add_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = NULL;
}

void add_at_index(struct node *head, int data, int index)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    first->data = 60;
    second->data = 70;
    third->data = 80;

    head = first;
    first->next = second;
    second->next = third;
    third->next = NULL;
    printf("traversing in the beginning \n");
    traversing(head);

    head = add_at_first(head, 66);
    printf("traversing after adding in beginning \n");
    traversing(head);

    add_at_end(head, 77);
    printf("traversing after adding in end \n");
    traversing(head);

    add_at_index(head, 88, 2);
    printf("traversing after adding at index \n");
    traversing(head);
}