/*
WAP to find area and perimeter of rectangle.
area=l*b
peri=2*(l+b)
*/
#include<stdio.h>
main(){
    int l,b,a,p;
    printf("Enter Length And breadth of Rectangle\n");    // \n means cursor move to next line
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("Area=%d\n",a);
    printf("Perimeter=%d\n",p);
}
