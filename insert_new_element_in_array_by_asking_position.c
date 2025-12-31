
// insert_new_element_in_array_by_asking_position 
#include<stdio.h>
int main (){
        int n ;
    printf("enter the number of  the element ");
    scanf("%d",&n );
    int arr[n];
    for (int i =0 ; i <n ; i++){
        printf("enter the element %d  : ", i+1);
        scanf("%d", &arr[i]);
}
int arr_short [n+1];
int value ,position  ;
printf("enter te value which you want to change :");
scanf("%d",&value);
printf("enter the position in the array : ");
scanf("%d", &position);
int index = position- 1;
for (int i = 0; i<index ; i++){
    arr_short[i]= arr[i];
}
arr_short[index] = value;
for (int j = index; j<n ; j++){
    
    arr_short[j+1] = arr[j];

}
for ( int i = 0; i <= n; i++)
        printf("% 5d", arr_short[i]);
    printf("\n\n");

}