#include <stdio.h>

int main()
{
    char str[] = "PROGRAMMING";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        count++;
        
    }
     printf("the number of vowels is %d", count);

}