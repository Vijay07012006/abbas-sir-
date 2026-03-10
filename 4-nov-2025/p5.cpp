// WAP to create a matrix and display it
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], i, j;
    printf("Enter first matrix of (3*3)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[3][3]);
        }
    }
    printf("Enter second matrix of (3*3)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[3][3]);
        }
    }
    printf("Elements in  matrix A(3*3)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[3][3]);
        }
        printf("\n");
    }
    printf("Elements in  matrix B(3*3)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", B[3][3]);
        }
        printf("\n");
    }
}
