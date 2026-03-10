//WAP to find volume and surface area of cuboid.
#include<stdio.h>
int main(){
    int l,b,h,v,sa;
    printf("Enter lenght,breadth,height : ");
    scanf("%d %d %d",&l,&b,&h);
    v=l*b*h;
    sa=2*(l*b+b*h+h*l);
    printf("Volume of cuboid =%d\n",v);
    printf("Surface Area of cuboid =%d\n",sa);
}