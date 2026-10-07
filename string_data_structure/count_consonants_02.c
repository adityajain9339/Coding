#include <stdio.h>
int main()
{

    char str[] = "PROGRAMMING";
    int vowels = 0;
    int consonants = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' ||
            str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}