#include <iostream>
using namespace std;

void conquer(int arr[], int l, int mid, int r)
{
    int y = r - l + 1;
    int *merged = new int[y];
    int indx1 = l;
    int indx2 = mid + 1;
    int x = 0;
    while (indx1 <= mid && indx2 <= r)
    {
        if (arr[indx1] < arr[indx2])
        {
            merged[x++] = arr[indx1++];
        }
        else
        {
            merged[x++] = arr[indx2++];
        }
    }
    while (indx1 <= mid)
    {
        merged[x++] = arr[indx1++];
    }
    while (indx2 <= r)
    {
        merged[x++] = arr[indx2++];
    }
    int j = l;
    for (int i = 0; i < y; i++)
    {
        arr[j] = merged[i];
        j++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        conquer(arr, l, mid, r);
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms in array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the terms of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    cout << "Sorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}