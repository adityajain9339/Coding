#include<stdio.h>
int main ()
{
  int arr[5] , max , min ;
      for( int i =0; i<5;i++){
        printf("enter the number %d\n ", i+1);
        scanf("%d", &arr[i]);
        max = min = arr[0];
    }
    for (int  j =0 ; j<5;j++){
        if (arr[j]> max ){
            max = arr[j];
        }
        if (arr[j]< min ){
            min = arr[j];
        }

    }
printf("the largest number in the array is %d\n ", max);
printf("the smalest  number in the array is %d\n ", min );
}