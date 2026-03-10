//WAP to 
#include<stdio.h>
void table(int n){
    int i,t;
    for(i=1;i<=10;i++){
        t=n*i;
        printf("%d\n",t);
    }
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    table(num);
}