//WAP to check given two matrixs are equal or not.
#include<stdio.h>
int main()  
{
    int arr1[3][3], arr2[3][3], i, j, f = 1;
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    //check if two matrices are equal
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                f = 0;
                break;
            }
        }
    }
    if (f == 1)
        printf("Two matrices are equal.\n");
    else
        printf("Two matrices are not equal.\n");
}