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

void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = i; j > 0; j--)
        {
            if (arr[j] >= arr[j-1])
            {
                break;
            }
            else
            {
                swap(&arr[j], &arr[j-1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 4, 7, -2, -1, 8, 6, 2, 9, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}