//Find the factorial of a number using Recursion
#include <stdio.h>

// Recursive function
int factorial(int n) {
    if(n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Factorial not defined for negative numbers.\n");
    else
        printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}