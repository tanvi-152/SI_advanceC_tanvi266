//leap yearor not a leap year
#include<stdio.h>
int main()
    {
        int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%4==0)     // for century leap year%400 or(year%4&&year%100)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
    }