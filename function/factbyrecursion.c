//WAP to find the factorial of the given number
#include<stdio.h>
int fact(int n){
    if(n<=1){
        return n;
    }
    return n*fact(n-1);
}
int main(){
    int n=5;
    int a = fact(n);
    printf("Factorial is :%d",a);
}