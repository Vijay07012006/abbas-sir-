#include<stdio.h>
int main(){
    int a,i,j,k;
    printf("Enter no of rows : ");
    scanf("%d",&a);
     for (i = a; i > 1; i--)
    {
        for(k=a-i;k>0;k--){
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for (i = 1; i <= a; i++)
    {
        for(k=a-i;k>0;k--){
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}