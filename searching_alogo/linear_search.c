#include<stdio.h>
#include <stdbool.h>
// this is actully when the number is not repeat
// int linearsearch(int arr[], int size, int element) {

//     for (int i = 0; i < size; i++) {

//         if (arr[i] == element) {
//             return i;
//         }
//     }

//     return -1;
// }


// if the numbe is repeat in the array for two time then
int linearsearchsecond(int *arr, int size, int element)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(arr+i) == element)
        {
            printf("element found in %d \n ",(i+1));
            break;
        } else {
            printf("element not found!!");
            break;
        }
    }

    return -1;
}
void inputofarray(int size , int arr[]){
    for(int i =0; i<size; i++){
        printf("Enter the number in index %d \n",i);
        scanf("%d", &arr[i]);
    }
}
int main(){
    int size , element;
    printf("Enter the size of your array");
    scanf("%d", &size);
    int arr[size];
    inputofarray(size, arr);
    printf("Enter the element you want to search in the array :");
    scanf("%d", &element);
    int found = linearsearchsecond(arr,size, element);
    if (found == -1)
    {
        printf("the value is not found !!!\n");
    }
    else
    {
        printf("the value found in the index  %d \n ", found);
    }
    return 0;
}