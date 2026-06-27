//72.	Find the sum of natural numbers using Recursion
#include <stdio.h>

// Recursive function to find sum
int sum(int n)
{
    if(n == 0)   // Base case
        return 0;
    else
        return n + sum(n - 1);  // Recursive call
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sum(n);

    printf("Sum of first %d natural numbers = %d", n, result);

    return 0;
}