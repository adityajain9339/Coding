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