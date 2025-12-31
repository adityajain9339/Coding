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
    int arr_odd[n], arr_even[n] ;
    int o =0,  e=0 ;
    for (int i =0 ; i <n ; i++){
            if (arr[i] %2 ==0 ){
                arr_even[e] = arr[i];
                e++;
            }
            else {
                arr_odd [o] = arr[i];
                o++;
            }
    }
        printf("Even elements:\n");
        for(int i = 0; i < e; i++) {
            printf("%d ", arr_even[i]);
        }

        printf("\nOdd elements:\n");
        for(int i = 0; i < o; i++) {
            printf("%d ", arr_odd[i]);
        }

        printf("\n");
        return 0;
}