#include<stdio.h>
int sum (int a , int b ){
    printf("the sum of the number %d + %d = %d", a,b,a+b);

}
int main (){
    int num1, num2;
    printf("enter the first number:\n");
    scanf("%d" ,&num1);
    printf("enter the second  number:\ns");
    scanf("%d" ,&num2);

    sum(num1,num2);

}