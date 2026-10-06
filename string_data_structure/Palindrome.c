#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false; // Characters mismatch
        }
        left++;
        right--;
    }
    return true; 
    // All mirrored characters matched
}

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        // Remove trailing newline character added by fgets, if present
        str[strcspn(str, "\n")] = '\0'; 

        if(isPalindrome(str))
        {
            printf("\"%s\" is a palindrome.\n", str);
        }
        else
        {
            printf("\"%s\" is not a palindrome.\n", str);
        }
    }

    return 0;
}