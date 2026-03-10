// WAP to check given two matrices are equal or not.
#include <stdio.h>
int main()
{
    int A[2][2], B[2][2], i, j,f=0;
    printf("Enter first matrices (2*2) :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter second matrices (2*2) :\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (A[i][j] == B[i][j])
            {
                f=1;
            }
        }
    }
    if(f==1){
        printf("both matrices are equal");
    }
    else{
        printf("both matrices are not equal");
    }
}