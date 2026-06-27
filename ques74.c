//Input and print array elements using pointers
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;   // pointer to array

    // Input elements using pointer
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    // Print elements using pointer
    printf("Array elements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}