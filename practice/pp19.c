#include <stdio.h>
int main()
{
    int Arr[3][3][3], i, j, k;
    printf("Enter the matrix of (3*3*3) :\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d",&Arr[i][j][k]);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ",Arr[i][j][k]);
            }
            
        }
        printf("\n");
    }
}