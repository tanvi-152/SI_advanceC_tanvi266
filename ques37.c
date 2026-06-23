//largest and smallest element in the array
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
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)   //compare with the min value not with index
        {
            min=arr[i];
            poss=i;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            posl=i;
        }
    }
    printf("smallest:%d",min);
        printf("larges:%d",max);
    return 0;
}