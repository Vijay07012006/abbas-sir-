//WAp to find average of n numbers using array
#include<stdio.h>
int main(){
    int i,sum=0,n;
    float avg;
    printf("How many numbers you want? : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("Average:%.2f\n",avg);
}