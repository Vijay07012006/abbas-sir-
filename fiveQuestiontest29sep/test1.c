// WAP to convert binary to list decimal equivalent.

#include<stdio.h>
#include<math.h>
int main(){
    int bnum,d,c=0,dec=0,i;
    printf("Enter a binary number : ");
    scanf("%d",&bnum);
    while(bnum>0){
        d=bnum%10;
        dec=dec+d*pow(2,c);
        bnum=bnum/10;
        c++;
    }
    printf("Decimal=%d",dec);
}