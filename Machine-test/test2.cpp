//WAP to check given number is prime or not.
#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("Number is prime\n");
    }
    else{
        printf("Number is not prime\n");
    }
}