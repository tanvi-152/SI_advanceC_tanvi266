//palindrome
#include <stdio.h>
int main()
{
    int n=127;
    int r,s=0;
    int  tem=n;
    while(n!=0)
    {
       r=n%10;
       s=s+r;
       n=n/10;
    }
    if(tem==s)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}