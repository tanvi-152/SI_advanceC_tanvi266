//check charater is alphabet,digit,special character
   #include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("It is an Alphabet");//or can do by ASCII value
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is a Special Character");
    }

    return 0;
}