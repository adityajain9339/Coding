#include<stdio.h>
 int  sum(int a, int b ){
    return a+b;
}
int main()
{
     int num1, num2;
    printf("enter the first number:\n");
    scanf("%d" ,&num1);
    printf("enter the second  number:\n1234r");
    scanf("%d" ,&num2);
    int result= sum(num1, num2);
printf("the sum of the number %d + %d = %d", num1,num2,result);
}