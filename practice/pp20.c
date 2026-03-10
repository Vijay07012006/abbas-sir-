//count the digits.
#include<stdio.h>
int main(){
    int n,i,d=1;
    printf("Enter a number :\n ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        n=n/10;
        d++;
    }
    printf("number of digits :%d\n",d);
}