//Call by Value vs. Call by Reference demonstration.
#include <stdio.h>

// Call by Value
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue (Call by Value): a = %d, b = %d\n", a, b);
}

// Call by Reference
void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapReference (Call by Reference): a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call by Value
    swapValue(x, y);
    printf("After swapValue: x = %d, y = %d\n", x, y);

    // Call by Reference
    swapReference(&x, &y);
    printf("After swapReference: x = %d, y = %d\n", x, y);

    return 0;
}