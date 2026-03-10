//WAP to find greatest number in five numbers using array.
#include<stdio.h>
int main(){
    int list[5],i,greatest;
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&list[i]);
    }
    greatest=list[0];
    for(i=0;i<5;i++){
        if(greatest<list[i]){
            greatest=list[i];
        }
    }
    printf("Greatest number is=%d",greatest);
}
