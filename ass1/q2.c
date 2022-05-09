/*name: Aniket Raj
sec:CST_SPL_2
university ROLL NO:2017463
Roll No:18
Q=2
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n],flag=0,i,d;
    printf("enter array element\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    d=a[1]-a[0];
    for(i=2;i<n-1;i++)
    {
        if(a[i+1]!=a[i]+d)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("NOT in AP");
    else printf("in AP");

}