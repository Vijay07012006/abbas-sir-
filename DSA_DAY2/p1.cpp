#include<stdio.h>
int main(){
    int i , N;
    printf("Enter How many numbers you want to insert : ");
    scanf("%d",&N);
    int ARR[N];
    for(i=0;i<N;i++){
        scanf("%d",&ARR[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",ARR[i]);
    }
}