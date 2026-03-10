//WAP to swap two numbers using call by reference.
#include<stdio.h>
void swap(int * x, int * y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);        //& for memory address
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
