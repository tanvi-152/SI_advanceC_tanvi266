// sum of diagonal elements
#include<stdio.h>

int main()
{
    int r, c, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Boundary sum
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(i == 0 || i == r-1 || j == 0 || j == c-1)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("Sum of boundary elements = %d", sum);

    return 0;
}