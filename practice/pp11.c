// #include <stdio.h>
// int main()
// {
//     int a, b, i, j,c=0;
//     printf("Enter row : ");
//     scanf("%d", &a);
//     printf("Enter col : ");
//     scanf("%d", &b);
//     for (i = 1; i <= a; i++)
//     {
//         for (j = 1; j <= b; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>
int main()
{
    int a, b, i, j,k;
    printf("Enter row : ");
    scanf("%d", &a);
    // printf("Enter col : ");
    // scanf("%d", &b);
    for (i = 1; i <= a; i++)
    {
        for(k=a-i;k>0;k--){
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    // for (i = a; i > 1; i--)
    // {
    //     for(k=a-i;k>0;k--){
    //         printf(" ");
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
 }