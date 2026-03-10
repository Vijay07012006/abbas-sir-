//WAP to generate Fibonacci series upto n terms.
#include<stdio.h>
int main(){
    int n,i,n1=0,n2=1,n3;
    printf("Enter number of terms to make fibonacci series: ");
    scanf("%d",&n);
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(i=0;i<n-2;i++){
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
}