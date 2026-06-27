//Calculate the power of a number using Recursion.
#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main()
{
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    int result = power(base, exp);

    printf("%d^%d = %d", base, exp, result);

    return 0;
}