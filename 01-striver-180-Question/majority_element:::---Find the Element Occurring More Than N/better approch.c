
// #include <stdio.h>

// void printDistinctElements(int arr[], int n) {
//     printf("Distinct elements are: ");
    
//     for (int i = 0; i < n; i++) {
//         int isDistinct = 1; // Assume the current element is distinct
        
//         // Check if arr[i] is already present in arr[0...i-1]
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isDistinct = 0; // Found a duplicate, mark as not distinct
//                 break;
//             }
//         }
        
//         // If it wasn't found earlier, it's distinct
//         if (isDistinct) {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {2, 1, 1, 3, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printDistinctElements(arr, n);
    
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// // Comparison function required by qsort
// int compare(const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }

// void printDistinctSorted(int arr[], int n) {
//     if (n == 0) return;
    
//     // Create a copy so we don't modify the original array
//     int *sortedArr = (int*)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++) {
//         sortedArr[i] = arr[i];
//     }
    
//     // Sort the copied array
//     qsort(sortedArr, n, sizeof(int), compare);
    
//     printf("Distinct elements are: %d ", sortedArr[0]);
    
    
//     for(int i = 1; i < n; i++) {// Print only if the current element is different from the previous one
//         if (sortedArr[i] != sortedArr[i - 1]) {
//             printf("%d ", sortedArr[i]);
//         }
//     }
//     printf("\n");
    
//     // Free the dynamically allocated memory
//     free(sortedArr);
// }

// int main() {
//     int arr[] = {2, 1, 1, 3, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printDistinctSorted(arr, n);
    
//     return 0;
// }