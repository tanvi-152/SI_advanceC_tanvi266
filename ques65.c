//Create a function to check for Prime/Armstrong/Perfect numbers.
#include <stdio.h>
#include <math.h>

// Prime Function
int isPrime(int n) {
    if(n <= 1) return 0;

    for(int i = 2; i * i <= n; i++) {   // optimized
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// Armstrong Function
int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    // Count digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of powers
    while(temp != 0) {
        int r = temp % 10;
        int power = 1;

        for(int i = 0; i < digits; i++) {
            power *= r;   // without using pow()
        }

        sum += power;
        temp /= 10;
    }

    return (sum == n);
}

// Perfect Number Function
int isPerfect(int n) {
    int sum = 0;

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");

    if(isPrime(num))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    if(isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    if(isPerfect(num))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}