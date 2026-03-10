//WAP to create an array of ten numbers and sort it into ascending order.
#include<stdio.h>
int main(){
    int n,i,temp,j;
    printf("How many numbers you want to insert : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers in array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Elements after sorted order\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}