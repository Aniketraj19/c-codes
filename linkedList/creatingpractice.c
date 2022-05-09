#include<stdio.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void create()
{
    head = (struct node *)malloc(sizeof(struct node));
}

int main()
{
    create();
}