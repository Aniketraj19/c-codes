#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int coeff;
    int expo;
    struct node *next;
} *poly = NULL;

void create()
{
    struct node *t, *last;
    int size;
    printf("Enter the size of the polynomial \n");
    scanf("%d", &size);
    printf("Enter the coeff and exponent of the polynomial funtion \n");
    for (int i = 0; i < size; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d%d", &t->coeff, &t->expo);
        t->next = NULL;
        if (poly == NULL)
        {
            poly = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
}

void display()
{
    struct node *p = poly;
    while (p)
    {
        printf("%dx%d + ", p->coeff, p->expo);
        p = p->next;
    }
}

int Eval(int x)
{
    struct node *p = poly;
    int sum = 0;
    while (p)
    {
        sum += p->coeff * pow(x, p->expo);
        p = p->next;
    }
    return sum;
}

int main()
{
    create();
    display();
    printf("After evaluation answer is: %d", Eval(5));
    return 0;
}