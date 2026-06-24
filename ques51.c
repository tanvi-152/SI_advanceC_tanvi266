//matrix is symmetric
#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c], transpose[c][r];

    // Input matrix
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    // Transpose logic
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    // Display transpose
    printf("Transpose matrix:\n");
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    if(transpose[c][r]==arr[r][c])
    {
     printf("symmetric");
    }
    else{
    printf(" not a symmetric");
    }
    return 0;
}