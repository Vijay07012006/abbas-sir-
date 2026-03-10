// WAP to take matrix as input and display it.
#include <stdio.h>
int main()
{
    int A[3][3], i, j;
    printf("Enter a matrix of (3*3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("you have entered the following matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

