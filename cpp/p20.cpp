//1.WAP ro reverse the number.
#include<stdio.h>
 int main(){
    int n,d,reverse=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        reverse= reverse*10+d;
        n=n/10;
    }
    printf("reverse of this number=%d\n",reverse);

}