//WAP to demonstrate concept of pointer.
#include<stdio.h>
int main(){
    int x=100;
    int * p;
    p=&x;
    printf("The value=%d\tthe address=%u\n",x,&x);  // \t means tab (space)
    printf("The value=%d\tthe address=%u\n",*p,p);
}