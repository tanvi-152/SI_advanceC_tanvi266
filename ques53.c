// check if matrix are equal
#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];

    // Input first matrix
    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    int flag = 1;

    // Compare matrices
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(A[i][j] != B[i][j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Matrices are equal");
    else
        printf("Matrices are not equal");

    return 0;
}    