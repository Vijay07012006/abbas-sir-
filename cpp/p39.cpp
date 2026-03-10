// WAP to check given  two matrix are equal or not.
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], i, j, f = 0;
    printf("Enter matrix A of (3*3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter matrix B of (3*3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // check both matrix are equal or not
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] == B[i][j])
            {
                continue;
            }
            else
            {
                f = 1;
                break;
            }
        }
    }
    if(f==0){
        printf("Both matrix are equal.\n");
    }
    else{
        printf("Both matrix are not equal.\n"); 
    }
}