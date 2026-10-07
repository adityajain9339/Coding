#include <stdio.h>

int main()
{
    char str[] = "PROGRAMMING";
    int length = 0;

    while (str[length] != '\0') // 1. Find the length of the string manually
    {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) // 2. Swap characters from both ends moving toward the middle
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
}