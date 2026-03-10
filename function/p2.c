//WAP to find Area and Permimeter of Rectangle using function.
int Area(int l,int b){
    return l*b;
}
int Peri(int l,int b){
    return 2*(l+b);
}
#include<stdio.h>
int main(){
    int a,b,area,perimeter;
    printf("Enter lenght and breadth of rectangle :\n");
    scanf("%d%d",&a,&b);
    area=Area(a,b);
    perimeter=Peri(a,b);
    printf("AREA=%d\n",area);
    printf("PERIMETER=%d",perimeter);
}