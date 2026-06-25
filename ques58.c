//Reverse a string.
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    // Reverse string
    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}