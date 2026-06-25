//Check if a string is a Palindrome
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("String is a Palindrome");
    else
        printf("String is NOT a Palindrome");

    return 0;
}