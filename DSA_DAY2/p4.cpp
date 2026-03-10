#include<stdio.h>
int main(){
    int ARR[10],ec=0,oc=0,i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++){
        scanf("%d",&ARR[i]);
    }
    for(i=0;i<10;i++){
        if(ARR[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    printf("Even counts=%d\n",ec);
    printf("odd counts=%d\n",ec);


}