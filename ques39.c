//insert an element
#include<stdio.h>
int main()
{
    int n, pos, x;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[100];   // extra space for insertion

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d",&x);

    printf("Enter position (0 to %d): ", n);
    scanf("%d",&pos);

    // shift elements to the right
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }

    // insert element
    arr[pos] = x;

    n++; // increase size

    printf("Array after insertion:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}