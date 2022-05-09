/*name: Aniket Raj
sec:CST_SPL_2
university ROLL NO:2017463
Roll No:18
Q=9
*/
#include<stdio.h>

void enqueue(int *a,int *rear,int data,int *front,int *size)
{
    *rear=((*rear)+1)%(*size);
   
    a[*rear]=data;
    if(*rear==0){
    *front=*rear;
    

    }
}

int dequeue(int *a,int *front,int *rear,int *size)
{
    if(*front==*rear)
    {
        printf("overflow....\n");
        return 0;
    }
    int value;
    value=a[(*front)];
    *front=(*front+1)%(*size);

    if(*front==*rear)
    *front=*rear=-1;
    return  value;

}

void display(int *a,int *front,int *rear)
{
    printf("queue data is\n");
    for(int i=*front;i<=*rear;i++)
    printf("%d ",a[i]);

}

int main()
{
    int *front,*rear,n,data,f=-1,r=-1;
    front=&f;
    rear=&r;
    printf("enter size of queue:");
    scanf("%d",&n);
    int a[n];
    int choice;

    do{
        printf("**main Menu**\n1.for enqueue\n2.for dequeue\n3.for display\n10.for exist\nenter choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("enter data for queue operation:");
        scanf("%d",&data);
        enqueue(a,rear,data,front,&n);
        break;
        case 2:
        printf("dequeue operation value:%d\n",dequeue(a,front,rear,&n));
        break;
        case 3:
        display(a,front,rear);
        break;
        }
    }while(choice!=10);


}