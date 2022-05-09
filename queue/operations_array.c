#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f;
    int r;
    int size;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("enqueued element is %d \n",q->arr[q->r]);
    }
}

int dequeue (struct queue *q)
{
    int a =-1;
    if(isEmpty(q))
    {
        printf("Queue is empty");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 55);
    enqueue(&q, 44);
    enqueue(&q, 33);
    enqueue(&q, 22);
    enqueue(&q, 11);
    printf("dequing element %d \n",dequeue(&q));
    printf("dequing element %d \n",dequeue(&q));
    printf("dequing element %d \n",dequeue(&q));
    printf("dequing element %d \n",dequeue(&q));
    printf("dequing element %d \n",dequeue(&q));
    if (isEmpty(&q))
    {
        printf("empty");
    }
    else{
        printf("not empty");
    }
    
    
}