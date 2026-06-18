#include<stdio.h>
int main()
{
    int n=977;
    int r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("reversed number:%d",rev);
    return 0;
}