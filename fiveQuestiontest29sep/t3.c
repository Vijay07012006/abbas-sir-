//WAP to input 10 numbers in an array by user and take another number to search in array .

#include<stdio.h>
int main(){
    int arr[10],num,i,f=0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search in array:\n");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(num==arr[i]){
            f=1;
            printf("number is found at postion %d",i+1);
        }
        else{
            continue;
        }
    }
    if(f!=1){
        printf("Number is not found");
    }
}