//largest of three elements
#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("enter elements");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        largest=a;
        printf(" the largest number is:%d",largest);
    }
    else if(b>c&&b>a)
    {
        largest=b;
        printf(" the largest number is:%d",largest);
    }
    else if(c>a&&c>b)
    {
        largest=c;
        printf(" the largest number is:%d",largest);
    }
    return 0;
}