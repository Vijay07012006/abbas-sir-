#include<stdio.h>
int main(){
    int ARR[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int n=10;
    for(i=n-1;i>=0;i--){
        printf("%d ",ARR[i]);
    }
}