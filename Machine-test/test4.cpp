//WAP to find factorial of given number.
#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("Enter a number to find its factorial : ");
    scanf("%d",&n);
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
    printf("Factorial of %d :%d\n",n,fact);
}