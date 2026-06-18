//armstrong number
#include <stdio.h>
int main()
{
    int n=159;
    int r,s=0;
    int tem=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(tem==s)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong ");
    }
    return 0;
}
//if its not an 3 digit number


#include<math.h>

int main()
{
    int n = 153;
    int r, s = 0, count = 0;
    int temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;  // reset temp
    while(temp != 0)
    {
        r = temp % 10;
        s = s + pow(r, count);
        temp = temp / 10;
    }
    if(n == s)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not an Armstrong");
    }
    return 0;
}