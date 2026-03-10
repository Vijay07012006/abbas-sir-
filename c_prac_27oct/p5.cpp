//WAP to create an array of ten numbers by user input.Now count occurerence of given number in array.
#include<stdio.h>
int main(){
    int arr[10],i,item,f=0;
    printf("Enter 10 numbers : \n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search in Array : ");
    scanf("%d",&item);
    for(i=0;i<10;i++){
        if(item==arr[i]){
            f++;
        }
    }
    printf("No of occurence :%d\n",f);
}