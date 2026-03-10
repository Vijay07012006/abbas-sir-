//4.WAP to print the fibonacci series up to n term.
#include<stdio.h>
int main(){
    int n,n1=0,n2=1,n3,i;
    printf("Enter NUmber : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
}