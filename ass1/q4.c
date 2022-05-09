/*name: Aniket Raj
sec:CST_SPL_2
university ROLL NO:2017463
Roll No:18
Q=4
*/
#include<stdio.h>


void push(int a[],int *top,int data)
{
    a[++(*top)]=data;
    
  
}

int pop(int a[],int *top)
{
    return a[(*top)--];
}

int peek(int a[],int *top)
{
    return a[*top];
}

void display(int a[],int *top)
{
    printf("stack data is\n");
    for(int i=*top;i>=0;i--)
    printf("%d ",a[i]);
}
int main()
{
    int n,t=-1,*top,data;
    top=&t;

    printf("enter size of stack:");
    scanf("%d",&n);
    int a[n];
   
    for(int i=0;i<n;i++)
    {
        printf("enter stack data:");
        scanf("%d",&data);
        push(a,top,data);
    }
  
     printf("pop operation is %d\n",pop(a,top));
     printf("peek:%d\n",peek(a,top));
     display(a,top);
       
    
}