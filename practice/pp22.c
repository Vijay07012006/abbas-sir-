//fibonacci in square pattern
#include<stdio.h>
int main(){
    int n,n1=0,n2=1,n3,i,j,k;
    printf("Enter  number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        n3=n1+n2;
        for(j=1;j<=n;j++){
            if(  j==1 || i==n || j==n || i==1){
                printf("* ");
            }
            else{
               printf("  ");
            }  
        }
        n1=n2;
        n2=n3;
        printf("\n");
    }

}