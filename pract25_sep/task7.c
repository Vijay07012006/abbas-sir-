//WAp to create an array of ten numbers and find max,min.
#include<stdio.h>
int main(){
    int list[10],i, min ,max;
    printf("Enter 10 numbers in list :\n");
    for(i=0;i<10;i++){
        scanf("%d",&list[i]);
    }
    max=list[0];
    min=list[0];
    for(i=1;i<10;i++){
        if(max<list[i]){
            max=list[i];
        }
        else if(min>list[i]){
            min=list[i];
        }
    }
    printf("MINIMUM NUMBER IN LIST:%d\n",min);
    printf("MAXIMUM NUMBER IN LIST:%d\n",max);
}   