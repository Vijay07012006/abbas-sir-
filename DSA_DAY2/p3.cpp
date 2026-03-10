#include<stdio.h>
int main(){
    int ARR[10],max,min,i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++){
        scanf("%d",&ARR[i]);
    }
    max=min=ARR[0];
    for(i=0;i<10;i++){
        if(max<ARR[i]){
            max=ARR[i];
        }
        if(min>ARR[i]){
            min=ARR[i];
        }
    }
    printf("largest number=%d\n",max);
    printf("smallest number=%d\n",min);
}