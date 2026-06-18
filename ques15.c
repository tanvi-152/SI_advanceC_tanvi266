//check if character is vowel or consonants
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel ");
    }
    else
    {
       printf("consonants "); 
    }
    return 0;
}