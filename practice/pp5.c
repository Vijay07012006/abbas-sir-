//Armstrong Number in range.
#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,Arm,c=0,d;
    printf("Enter number : ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        temp=temp/10;
        c++;
    }
    temp=n;
    Arm=0;
    while(temp>0){
        d=temp%10;
        Arm=Arm+pow(d,c);
        temp=temp/10;
    }
    if(Arm!=n){
        printf("number is not Armstrong");
    }
    else{
    printf("number is Armstrong");
    }
}