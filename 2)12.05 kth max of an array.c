#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}
 
void kLargest(int arr[], int n, int k)
{
    qsort(arr, n, sizeof(int), cmpfunc);
    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    kLargest(arr, n, k);
    return 0;
}
