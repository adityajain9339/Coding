#include <stdio.h>
#include <stdbool.h>

int inputofarray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the number in index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}
int binarysearch(int arr[], int size, int element)
{
    int low = 0, high = size, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        else if (mid > element)
            high = mid - 1;
        else if (mid < element)
            low = mid + 1;
        else
            return 0;
    }
}
int main()
{
    int size, element;
    printf("Enter the size of your array");
    scanf("%d", &size);
    int arr[size];
    inputofarray(size, arr);
    printf("Enter the element you want to search in the array");
    scanf("%d", &element);
    int found = binarysearch(arr, size, element);
    if (found == 0)
    {
        printf("the value is not found !!!\n");
    }
    else
    {
        printf("the value found in the %d \n ", found +1);
    }
    return 0;
}
