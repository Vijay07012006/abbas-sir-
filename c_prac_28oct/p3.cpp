// WAP to find tranpose of given matrix.
#include <stdio.h>
int main()
{
    int A[2][2], i, j;
    printf("Enter a matrix (2*2) :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n%d ", A[j][i]);
        }
        printf("\n");
    }
}