// Problem Statement
// Problem: Given an integer array nums, find all unique triplets [nums[i], nums[j], nums[k]] such that:
// 1. i != j, j != k, and i != k.
// 2. nums[i] + nums[j] + nums[k] == 0.
// 3. The answer must not contain duplicate triplets.

// Example
// Input:
// nums = {-1, 0, 1, 2, -1, -4};

// Output:
// [-1, -1, 2]
// [-1, 0, 1]

// Explanation:

// The first triplet is:
// -1 + -1 + 2 = 0

// The second triplet is:
// -1 + 0 + 1 = 0

// Both triplets have a sum of zero.

// Although -1 appears twice in the array, we must not return the same triplet more than once.

#include <stdio.h>
#include <stdlib.h>

void threeSum(int arr[], int n)
{
    // Step 1: Sort the array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int found = 0;

    // Step 2: Fix the first element
    for (int i = 0; i < n - 2; i++)
    {
        // Skip duplicate first elements
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        // Step 3: Find the other two elements
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0)
            {
                printf("[%d, %d, %d]\n",
                       arr[i], arr[left], arr[right]);

                found = 1;

                // Skip duplicate left elements
                while (left < right &&
                       arr[left] == arr[left + 1])
                {
                    left++;
                }

                // Skip duplicate right elements
                while (left < right &&
                       arr[right] == arr[right - 1])
                {
                    right--;
                }

                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    if (!found)
    {
        printf("No triplets found.\n");
    }
}

int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    threeSum(arr, n);

    return 0;
}
// Time and Space Complexity
// Operation	Complexity
// Sorting using bubble sort	O(n²)
// Finding triplets using two pointers	O(n²)
// Overall time complexity	O(n²)
// Auxiliary space complexity	O(1)


// The program uses bubble sort for educational purposes. If we replace it with an efficient sorting algorithm such as qsort(), the overall time complexity becomes O(n²), because finding the triplets takes O(n²) time.

// The space complexity remains O(1) auxiliary space, excluding the space used internally by the sorting implementation.