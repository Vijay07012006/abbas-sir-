//WAP to check given matrices are equal or not.
#include<stdio.h>
int main(){
    int A[2][2],B[2][2],i,j,f=0;
    printf("Enter first matrix of (2*2) :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
     printf("Enter Second matrix of (2*2) :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("Matching is in underProcess :\n ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(A[i][j]==B[i][j]){
                continue;
            }
            else{
                f=1;
                break;
            }
        }
    }
    if(f==0){
        printf("Both matrices are equal :\n ");
    }
    else{
        printf("Both matrices are not equal :\n ");
    }
}