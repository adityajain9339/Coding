#include <stdio.h>

int main()
{
    char str[] = "PROGRAMMING";
    int lenght = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        printf("%c\n", str[i]);
        
    }
}