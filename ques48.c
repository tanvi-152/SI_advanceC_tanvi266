//add two matrix
#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr1[r][c], arr2[r][c], sum[r][c];

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Matrix Addition
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
