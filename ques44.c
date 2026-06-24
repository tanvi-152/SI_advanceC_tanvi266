//44.	Linear Search: Find an element in an array.
#include<stdio.h>

int main()
{
    int n, key, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    // If not found
    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}