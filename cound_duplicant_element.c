#include<stdio.h>
int main (){
    int n ;
    printf("enter the number of the element:  ");
    scanf("%d",&n );
    int arr[n] ,arr1[n];
    for (int i =0 ; i <n ; i++){
        printf("enter the element %d\n " , i+1);
        scanf("%d", &arr[i]);
    } 
    int count =0;
 for (int i = 0; i <n ;i++){
    for ( int j =i+1; j<n ;j++){
       if ( arr[i] == arr[j] ){
        count++;
       

    }
    }
 }
 printf("the duplicate number  count is %d ", count );
}