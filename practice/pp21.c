//factorial in range.
#include<stdio.h>
int main(){
    int n1=0,n2=1,n3,start,end,i,j;
    printf("Enter starting number : ");
    scanf("%d",&start);
    printf("Enter ending number :");
    scanf("%d",&end);
    for(i=start;i<=end;i++){
        n3=n1+n2;
        // for(j=start;j<=i;j++){
        //     printf("%d",n3);
        // }
         printf("%d",n3);
        n1=n2;
        n2=n3;
        printf("\n");
    }
}