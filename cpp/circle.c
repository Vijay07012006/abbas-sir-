#include<stdio.h>
int main(){
    int i,j,r;
    printf("Enter radius of circle : ");
    scanf("%d",&r);
    for(i=-r;i<=r;i++){
        for(j=-r;j<=r;j++){
            if(i*i+j*j<=r*r){
                printf("*  ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    for(i=-r+1;i<=r;i++){
        for(j=-r;j<=r;j++){
            if(i*i+j*j<=r*r){
                printf("*  ");
            }
            else{
                printf("    ");
            }
        }
        printf("\n");
    }
    return 0;
}