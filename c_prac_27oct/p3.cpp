//WAP to reverse the digits of given number , and check number is palindrome or not.
#include<stdio.h>
int main(){
    int n,i,f=0,d,temp,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    // printf("%d",rev);
    if(temp==rev){
        printf("No is palindrome\n");
    }
    else{
        printf("No is not palindrome\n");
    }
    
}