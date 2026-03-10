//WAP to convert binary number to its decimal equivalent.
#include<stdio.h>
#include<math.h>
main(){
    int bnum,dec=0,d,p=0;
    printf("Enter a binary number : ");
    scanf("%d",&bnum);
    while(bnum>0){
        d=bnum%10;
        dec=dec+d*pow(2,p);
        bnum=bnum/10;
        p++;
    }
    printf("Decimal number=%d\n",dec);
}