#include<stdio.h>
int main(){
    int ARR[10],i,f=0,item;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++){
        scanf("%d",&ARR[i]);
    }
    printf("Enter a numbers to search in ARRAY : ");
    scanf("%d",&item);
    for(i=0;i<10;i++){
        if(item==ARR[i]){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("Number is found at postion %d\n",i+1);
    }
}