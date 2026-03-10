//WAP to print table of givin number.
#include<stdio.h>
main(){
    int n,i;
    printf("Enter a number to print table : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
}