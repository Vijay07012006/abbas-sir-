#include<stdio.h>
int main(){
    char name[50];
    printf("Enter your full name : \n");
    fgets(name,sizeof(name),stdin);
    puts(name);
}