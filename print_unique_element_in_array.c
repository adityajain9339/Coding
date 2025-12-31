#include<stdio.h>
int main (){
        int n ;
    printf("enter the number of  the element ");
    scanf("%d",&n );
    int arr[n];
    for (int i =0 ; i <n ; i++){
        printf("enter the element \n ");
        scanf("%d", &arr[i]);
    } 
     int arr1 [n];
     for (int i = 0; i <n ;i++){
        int isunique = 1;
        for ( int j =0; j<n ;j++){
       if (  i!= j && arr[i] == arr[j] ){
        isunique =0;
        break;}
    }
    if ( isunique == 1) {
        printf("%d ", arr[i]);}
}}