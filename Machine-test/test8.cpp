//WAP to find area and perimeter of circle using function.
#include<stdio.h>
int main(){
    int r,pi=3.14,area,peri;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    area=pi*r*r;
    peri=2*pi*r;
    printf("Area of circle=%d\n",area);
    printf("Perimeter of circle=%d\n",peri);

}