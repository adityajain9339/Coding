#include<stdio.h>
// int majority_element(int arr[], int size){
//     int count =0;
//     for(int i =0; i<size;i++){
//         int temp = arr[i];
//         for(int j =i+1; j<size; j++){
//             if(temp==arr[j]){
//                 count++;
//             }
//         }
//         if(count>size/2){
//             return temp;
//         }
//     }

    
// }
int majority_element(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        int temp = arr[i];

        for (int j = i + 1; j < size; j++) {
            if (temp == arr[j]) {
                count++;
            }
        }

        if (count > size / 2) {
            return temp;
        }
    }

    return -1;
}

int main(){
    int arr[]={2,1,1,1,1,2};
    int a =majority_element(arr,6);
    printf("%d", a);

}
// - Time complexity: (O(N^2)) in the worst case.
// - Auxiliary space complexity: (O(1)).

/*#include <stdio.h> this is the code for the striver 

// Returns the majority element.
int majorityElement(int* nums, int n) {
    int threshold = n / 2;

    // Test every array value as a possible majority candidate.
    for (int i = 0; i < n; i++) {
        int candidate = nums[i];
        int frequency = 0;

        // Count the candidate across the complete array.
        for (int j = 0; j < n; j++) {
            // Equal values contribute to the candidate's frequency.
            if (nums[j] == candidate) {
                frequency++;
            }
        }

        // A strict majority appears more than half of the time.
        if (frequency > threshold) {
            return candidate;
        }
    }

    return -1;
}

// Driver code
int main() {
    int nums[] = {2, 1, 1};
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate the number of elements

    printf("%d\n", majorityElement(nums, n));
    
    return 0;
}*/
