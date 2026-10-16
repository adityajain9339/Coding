// Remove Duplicates from Sorted Array
#include <stdio.h>

int removeDuplicates(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    int k = 1;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[k - 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, size);

    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates: ");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

// Complexity
// - Time Complexity: O(n)
// - Space Complexity: O(1)
// Approach: Two pointers. Since the array is sorted, we compare each element with the last unique element and keep only distinct values.