//WAP to demontrate concept of dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(sizeof(int));
    printf("Enter a number : ");
    scanf("%d",p);      //yaha par & use karne ki jaroorat nahi hai kyoki yaha p already hi address le rahkha hai
    printf("The Value=%d\n",*p);
    free(p);        //this function release the memory
} 