/*
Electricity Bill Calculator
Unit                                        Bill/Unit
1-150                                       2.40
151-300                                     3.00
300-above                                   3.20
*/
#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter units consumed : ");
    scanf("%d",&unit);
    if(unit>=1 && unit<=150){
        bill=unit*2.40;
    }
    else if(unit>150 && unit<=300){
        bill=(150*2.40)+(unit-150)*3.00;
    }
    else{
        bill=(150*2.40)+(150*3.00)+(unit-300)*3.20;
    }
    printf("Total Bill:%.2f\n",bill);
}