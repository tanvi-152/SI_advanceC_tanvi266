//strong number (sum of digits factorial is equal to the number)
#include <stdio.h>
int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, temp, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        r = temp % 10;          // get digit
        sum = sum + fact(r);    // add factorial
        temp = temp / 10;       // remove digit
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}