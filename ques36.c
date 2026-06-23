#include<stdio.h>
int main()
{
    int n;
    printf("enter range");
    scanf("%d",&n);
    printf("enter array elements");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,avg=0;
    for(int j=70;j<n;j++)
    {
        sum=sum+arr[j];
        avg=sum/2;
    }
    printf("sum:%d",sum);
    printf("average%d",avg);
    return 0;
}