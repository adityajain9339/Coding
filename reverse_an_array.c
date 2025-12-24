// reverse of array
// reverse of array
#include<stdio.h>
int main ()
{
    int n ;
    printf("enter the number of  the element ");
    scanf("%d",&n );
    int arr[n] ,arr1[n];
    for (int i =0 ; i <n ; i++){
        printf("enter the element \n ");
        scanf("%d", &arr[i]);
    }
    for (int a =0 ; a<n ; a++){
        // arr1[n - 1 - a] = arr[a];
        int temp = arr[a];
        arr[a]= arr1[n-1-a];
        arr1[n-1-a]= temp;
    }
     for( int b =0; b<n ;b++){
        printf("The number %d \n ", arr1[b]);
        
     }  
     
}