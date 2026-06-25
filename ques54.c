//length of a string without using strlen
 #include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);   // for single word input

    // Calculate length
    while(str[length] != '\0')      //(pace jha milega whi tk count karega)   
    {
        length++;
    }

    printf("Length of string = %d", length);

    return 0;
}