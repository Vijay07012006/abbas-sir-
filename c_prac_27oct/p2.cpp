//WAP to find sum of digits of given number.
#include<stdio.h>
int main(){
    int n,sum=0,d;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("Sum Of Digits :%d\n",sum);
}