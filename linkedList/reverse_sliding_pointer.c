#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

} *head = NULL;

void create()
{
    int val;
    printf("Enter the values you want to enter in the linked list \n");
    scanf("%d", &val);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = val;
    head->next = NULL;
    printf("you can enter 0 at any time to terminate creation of the linked list \n");
    struct node *ptr = head;
    while (1)
    {
        scanf("%d", &val);
        if (val != 0)
        {
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            temp->data = val;
            temp->next = NULL;
            ptr->next = temp;
            ptr = temp;
        }
        else
        {
            break;
        }
    }
}

void reverse()
{
    struct node *p1 = NULL, *p2 = NULL;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        p2 = p1;
        p1 = ptr;
        ptr = ptr->next;
        p1->next = p2;
    }
    head = p1;
}

void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("the data is - %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// recursive function to print in reverse order
//  void display(struct node *ptr)
//  {
//      if(ptr!=NULL)
//      {
//          display(ptr->next);
//          printf("data is - %d\n", ptr->data);
//      }
//  }
int main()
{
    create();
    reverse();
    display();
    return 0;
}