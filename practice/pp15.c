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
           if (j == 1 || j == i || i == a)
            { 
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (l = a - i; l > 0; l--)
        {
            printf("    ");
        }
        for (k = 1; k <= i; k++)
        {
            if (k == 1 || k == i || i == a)
            { 
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = a-1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
           if (j == 1 || j == i || i == a)
            { 
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (l = a - i; l > 0; l--)
        {
            printf("    ");
        }
        for (k = 1; k <= i; k++)
        {
            if (k == 1 || k == i || i == a)
            { 
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}