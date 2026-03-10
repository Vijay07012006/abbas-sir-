#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter first matrix (3x3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter second matrix (3x3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }

    // Print resultant matrix
    printf("Resultant Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
