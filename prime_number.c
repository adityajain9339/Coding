#include<stdio.h>
int main ()
{
    int n = 5;
   for(int row = 1 ; row<= n ; row++){
    for (int star=1; star<=row; star++){
        if (star%2== 1){
            printf ("1");
        
        } else {
            printf("0");
        }
    }
    printf("\n");
   }
}