//WAP to check given number is palindrome or not.
#include<stdio.h>
int main(){
    int n,i,temp,d,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    if(temp==rev){
        printf("Number is palindrome\n");
    }
    else{
        printf("Number is not palindrome\n");
    }
}