#include<stdio.h>
int main ()
{
    int arr[5];
    for( int i =0; i<5;i++){
        printf("enter the number %d\n ", i+1);
        scanf("%d", &arr[i]);
    }
     for( int i =0; i<5;i++){
        printf("The number %d \n ", arr[i]);
     }   
}
