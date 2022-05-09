
#include<stdio.h>
#include<stdlib.h>
struct Node *root = NULL;
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};



void Create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}

void enqueue(struct Queue *q,struct Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
        printf("Queue if full");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;
    if (q->front == q->rear)
    {
        printf("Queue is empty \n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }

}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}


void Tree_create()
{
    struct Node *p,*t;
    int x;
    struct Queue q;
    Create(&q,100);
    printf("Enter the value of the root \n");
    scanf("%d",&x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter left child of %d\n",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
        printf("Enter right child %d\n",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q,t);
        }
    }
}

void preorder(struct Node *p)
{

    if(p)
    {

        printf("%d  ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main()
{
    Tree_create();

    preorder(root);
    return 0;
}
