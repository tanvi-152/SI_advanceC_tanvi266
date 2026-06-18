//number is prime number
#include <stdio.h>

int main()
{
    int count=0,n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i>=1;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
    return 0;
}
    
