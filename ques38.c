//reverse an array without using second array
#include<stdio.h>
int main()
{
    int n,min,max;
    printf("enter range");
    scanf("%d",&n);
    int poss,posl;
    printf("enter array elements");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("reversed array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}