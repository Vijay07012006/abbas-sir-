#include <stdio.h>
int main()
{
    int a, i, j, k, l;
    printf("Enter the no of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (l = a - i; l > 0; l--)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = a; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (l = a - i; l > 0; l--)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}