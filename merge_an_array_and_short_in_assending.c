// merge an array ans short in assending order
#include<stdio.h>
int main (){
    int n ;
    printf("enter the number of  the element ");
    scanf("%d",&n );
    int arr[n];
    for (int i =0 ; i <n ; i++){
        printf("enter the element : ");
        scanf("%d", &arr[i]);
}
   int b ;
    printf("enter the number of  the element ");
    scanf("%d",&b );
    int arr1[b];
    for (int i =0 ; i <b ; i++){
        printf("enter the element \n ");
        scanf("%d", &arr1[i]);

}
   int c = n +b;
   int arr2[c];
   for (int i =0; i<n ; i++){
    arr2[i]= arr[i];
   }
   for (int j =0; j <b ; j++){
   arr2[n + j] = arr1[j]; 
   
    // erron by aditya 1. arr2[j] = arr1[j]; 
    // What happens here?

// You overwrite values copied from arr

// Both arrays start copying at index 0
}
   
   for (int i =0; i<c ; i++){
    for ( int j =i+1; j <c ; j++){
        if (arr2 [i]> arr2[j]){
            int temp = arr2[i];
            arr2[i] = arr2[j];
            arr2[j]= temp ;
        }
    }
   }
   for( int i=0; i<c; i++)
    {
        printf("%d   ", arr2[i]);
    }
    printf("\n");
}