#include<stdio.h>
int main(){
    int Arr[5]={1,2,3,4,5},i,sum=0;
    float avg;
    for(i=0;i<5;i++){
        sum+=Arr[i];
    }
    avg=(float)sum/5;
    printf("Average=%.2f\n",avg);
}