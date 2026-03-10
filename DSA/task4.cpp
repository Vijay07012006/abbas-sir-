// 4.WAP to create an array of ten numbers by user input .NOW search a number in array.
#include<stdio.h>
int main(){
    int arr[10],i,item,c=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search : ");
    scanf("%d",&item);
    for(i=0;i<10;i++){
        if(item==arr[i]){
            c=1;
            break;
        }
    }   
    if(c==1){
        printf("NO is found and the  position is %d\n",i+1);
    }
}