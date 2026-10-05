#include <stdio.h>

int main()
{
    char str[] = "PROGRAMMING";
    int count_vowels = 0;
    int lenght = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count_vowels++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {

        lenght++;
    }

    printf("the number of consonants is %d", lenght - count_vowels);
}
