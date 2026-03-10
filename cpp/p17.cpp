//WAP to find sum of digits of given number.
#include<stdio.h>
main(){
    int n,d,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        d=d%10;
        s=s+d;
        n=n/10;
    }
    printf("Sum of digits=%d\n",s);

}