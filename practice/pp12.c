#include<stdio.h>
int main(){
    int a,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
     for(i=a-1;i>1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}