//Copy one string to another without strcpy.
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str1);   // for single word

    // Copy string
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';   // end the copied string

    printf("Copied string: %s", str2);

    return 0;
}