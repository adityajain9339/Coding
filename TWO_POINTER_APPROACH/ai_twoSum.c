#include <stdio.h>

void twoSum(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            printf("Indices: %d %d\n", left + 1, right + 1);
            return;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    printf("No solution found.\n");
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    twoSum(arr, size, target);

    return 0;
}