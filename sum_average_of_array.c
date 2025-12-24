// 🔥 3. Sum & Average of Array Elements
#include<stdio.h>
int main ()
{
    int arr[5], sum = 0, average ;
  for( int i =0; i<5;i++){
        printf("enter the number %d\n ", i+1);
        scanf("%d", &arr[i]);
        sum = sum +arr[i];
     }
     printf("the sum of the element in array is %d \n " , sum );
    printf("the average of the element in array is %d \n " , sum/5 ); 


}