//Compare two strings without strcmp.
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare strings
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            printf("Strings are NOT equal");
            return 0;
        }
        i++;
    }

    // Check if both ended at same time
    if(str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal");
    else
        printf("Strings are NOT equal");

    return 0;
}