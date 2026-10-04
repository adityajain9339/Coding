#include <stdio.h>

int main()
{
    char str[] = "PROGRAMMING";
    int lenght = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        lenght++;
    }
    printf("%d ", lenght);// it gave the output 11 
    printf("%ld \n ", sizeof(str));// but iot gave the output 12...

    return 0;
}