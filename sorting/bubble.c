#include <stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int n)
{
    int i, j, t = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("No. %d element of the array is : %d \n", i + 1, arr[i]);
    }
}

void to_free(int arr[])
{
    printf("array is free now");
    free(arr);
}

int main()
{
    int n = 0, i;
    printf("Enter the size of the array you want to enter : \n");
    scanf("%d", &n);
    int *arr= (int *)malloc(n * sizeof(int));;
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the no %d element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before sorting the elements of the array are as follows - \n");
    display(arr, n);

    bubble_sort(arr, n);
    printf("After sorting the elements of the array are as follows - \n");
    display(arr, n);

    to_free(arr);
    return 0;
}