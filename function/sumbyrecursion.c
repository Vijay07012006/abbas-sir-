#include<stdio.h>
int ch(int a){
    // int b=0;
    if(a==0){
        return a;
    }
    // b=a;
    return a+ch(a-1);
}
int main(){
    int a=5;
    int x=ch(a);
    printf("%d",x);
}