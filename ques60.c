//Count the number of vowels, consonants, digits, and spaces in a string.
#include <stdio.h>

int main()
{
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Check vowels
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
        // Check consonants
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
        // Check digits
        else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
        // Check spaces
        else if(ch == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}