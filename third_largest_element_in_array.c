#include<stdio.h>
int first,second , third ;
void assending_three_number( int arr[]){
    if (arr[0]>= arr[1] && arr[0] >= arr[2]){
        if (arr[1] >= arr[2]){
            first= arr[0];
            second = arr[1];
            third = arr[2]; }
        else{
            first= arr[0];
            second = arr[2];
            third = arr[1];} }   
    else if( arr[1]>= arr[0] && arr[1] >= arr[2]) {
        if (arr[0] >= arr[2]){
            first= arr[1];
            second = arr[0];
            third = arr[2]; }
        else{
            first= arr[1];
            second = arr[2];
            third = arr[0];} }   
    else if ( arr[2]>= arr[1] && arr[2] >= arr[0]){
        if (arr[1] >= arr[0]){
            first= arr[2];
            second = arr[1];    
            third = arr[0]; }
        else{
            first= arr[2];
            second = arr[0];
            third = arr[1];} } 
          }
int main (){ 
    int n ;
    printf("enter the number of  the element ");
    scanf("%d",&n );
    int arr[n];
    for (int i =0 ; i <n ; i++){
        printf("enter the element \n ");
        scanf("%d", &arr[i]);
    }   
    assending_three_number(arr);    
for (int i =3 ; i<n ;i++){
    if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } 
    else if (arr[i] > second) {
            third = second;
            second = arr[i];
        }
     else if (arr[i] > third) {
            third = arr[i];
        }
    }
printf("the third largest element in the array is %d ", third);
return 0;
}

