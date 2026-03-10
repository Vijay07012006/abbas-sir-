#include<stdio.h>
int main(){
    char Arr[10];
    int i,n,f=0;
    printf("ENter no in array :\n ");
    for(i=0;i<10;i++){
        scanf("%d",&Arr[i]);
    }
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        
        if(n==Arr[i]){
            f=1;
            break;
        }
        else{
            continue;
        }
    }
    if(f==0){
        printf("no is not found");
    }
    else{
        printf("no is  found");
    }
}