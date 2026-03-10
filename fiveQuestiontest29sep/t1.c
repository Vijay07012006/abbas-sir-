//WAP to store five numbers in an array by user input.Now display in reverse order.
#include<stdio.h>
int main(){
    int list[5],i;
    printf("Enter 5 numbrs\n");
    for(i=0;i<5;i++){
        scanf("%d",&list[i]);
    }
    for(i=4;i>=0;i--){
        printf("%d\n",list[i]);
    }
}
