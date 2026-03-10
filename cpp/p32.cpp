//WAP to search five numbers in array and search a number.
#include<stdio.h>
int main(){
    int list[5],i,f=0,num;
    printf("Enter five numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&list[i]);   
    }
    printf("Enter a number to search:\n");
    scanf("%d",&num);
    //searching
    for(i=0;i<5;i++){
        if(num==list[i]){
            f=1;
            break;  
        }
    }
    (f==1)?printf("Number found at position :%d\n",i+1):printf("Number not found\n");
}