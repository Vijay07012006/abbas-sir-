//WAP to swap two numbers using call by value.
#include<stdio.h>
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}