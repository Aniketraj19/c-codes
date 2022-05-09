#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root = NULL;

struct node *recur_insert(struct node *p, int key)
{
    struct node *t = NULL;
    if (p == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    // else if(key == p->data)
    // {
    //     return ;
    // }
    if (key < p->data)
    {
        p->lchild = recur_insert(p->lchild, key);
    }
    else
    {
        p->rchild = recur_insert(p->rchild, key);
    }
}

void Inorder(struct node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

int main()
{
    root = recur_insert(root, 10);
    recur_insert(root, 20);
    recur_insert(root, 15);
    recur_insert(root, 35);
    recur_insert(root, 25);
    recur_insert(root, 50);
    recur_insert(root, 55);

    Inorder(root);
    return 0;
}