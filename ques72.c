//. Swap two numbers using pointers. 
#include <stdio.h>

// Function to swap using pointers
void swap(int *a, int *b)
{
    int temp;
    temp = *a;   // store value of a
    *a = *b;     // assign b to a
    *b = temp;   // assign temp to b
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Passing addresses
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d", x, y);

    return 0;
}