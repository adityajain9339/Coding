#include<stdio.h>
int majority_element(int arr[], int size){
    int count =0;
    for(int i =0; i<size;i++){
        int temp = arr[i];
        for(int j =i+1; j<size; j++){
            if(temp==arr[j]){
                count++;
            }
        }
        if(count>size/2){
            return temp;
        }
    }

    
}
int main(){
    int arr[]={2,2,2,1,1,2};
    int a =majority_element(arr,6);
    printf("%d", a);

}