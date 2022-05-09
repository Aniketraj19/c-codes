/*name: Aniket Raj
sec:CST_SPL_2
university ROLL NO:2017463
Roll No:18
Q=1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n],i,j,flag,count=0,x=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        count=0;
        for(j=0;j<n;j++)
        {
          if(a[i]==a[j])
          count++;
        }
        if(count==1)
        x++;
        if(x==4)
        printf("element is:%d",a[i]);
    }
    
}