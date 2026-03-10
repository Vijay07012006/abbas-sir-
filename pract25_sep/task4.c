//WAP to generate fibonacci series upto n terms.
#include<stdio.h>
int main(){
    int n1=0,n2=1,n3,i,n;
    printf("Enter numbers of terms : ");
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    for(i=3;i<=n;i++){      //OR for(i=1;i<=n-2;i++)
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;    
    }
}