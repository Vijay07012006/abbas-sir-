// WAP to check given  two matrix are equal or not.
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], i, j;
    printf("Enter first matrix of (3*3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter second matrix of (3*3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    //check both matrix are equal or not
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] == B[i][j])
            {
                printf("Both matrix are equal.\n");
                return 0;
            }
            else
            {
                printf("Both matrix are not equal.\n");
                return 0;
            }
        }
    }
}
