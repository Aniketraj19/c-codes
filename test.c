#include <stdio.h>

int main()
{
    int a1 = 0;
    int a2 = 1;
    int n, b;
    printf("Enter the total no of digits you want to enter: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d", a1);
        }
        else if (i == 2)
        {
            printf("%d", a2);
        }

        else
        {
            b = a1 + a2;
            printf("%d", b);
            a1 = a2;
            a2 = b;
        }
    }
}