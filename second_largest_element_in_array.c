#include<stdio.h>
int main ()
{
   int arr[5] , largest , second_largest ;
      for( int i =0; i<5;i++){
        printf("enter the number %d\n ", i+1);
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1] ){
      largest= arr[0];
      second_largest= arr[1];
    }
    else {
        largest = arr[1];
        second_largest= arr[0];
    }
    for (int i =2 ; i< 5; i++){
        if (arr[i]> largest){
            
            second_largest = largest;
            largest = arr[i];
        }
        else {
            second_largest = arr[i];
            
        }
        
    }
    printf("the second largest element in the array is %d \n", second_largest);
}