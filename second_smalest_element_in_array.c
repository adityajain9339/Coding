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
int smalest , second_smalest;

if (arr[0]< arr[1]){
    smalest= arr[0];
    second_smalest= arr[1];
}
else {
    smalest= arr[1];
    second_smalest= arr[0];
}
for (int i =2; i<n ;i++){
    if (arr[i]< smalest){
        int temp = smalest;
        smalest= arr[i];
        second_smalest= smalest;
    }
}
printf("the second smalest element in the array is %d", second_smalest);
}
