#include<stdio.h>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min_pos;
    for (i = 0; i < n-1; i++)
    {
        min_pos = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(&arr[min_pos], &arr[i]);
    }
}

int main()
{
    int arr[] = {6, 1, 7, 8, 9, 3, 5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}