#include <stdio.h>
int main()
{
    int a, i, j, k, l;
    printf("enter no of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)

    {
        for (k = a - i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if(j==i || j==1 || i==a){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }for (k = a - i; k > 0; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if(j==i || j==1 || i==a){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)

    {
        for (k = a - i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if(j==i || j==1 || i==a){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }for (k = a - i; k > 0; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if(j==i || j==1 || i==a){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}