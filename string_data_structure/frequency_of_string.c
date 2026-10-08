#include <stdio.h>
int main()
{
    char str[] = "PROGRAMMING";
    char target = 'M';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }
    printf("%c occurs %d times", target, count);

    return 0;
}