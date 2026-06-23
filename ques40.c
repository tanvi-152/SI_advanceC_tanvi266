//deletion an element in an array
#include<stdio.h>
int main()
{
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[100];

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter position to delete (0 to %d): ", n-1);
    scanf("%d",&pos);

    // check valid position
    if(pos < 0 || pos >= n)
    {
        printf("Invalid position!");
        return 0;
    }

    // shift elements to left
    for(int i=pos;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }

    n--; // reduce size

    printf("Array after deletion:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}