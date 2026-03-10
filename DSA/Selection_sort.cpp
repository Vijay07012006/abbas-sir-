//Selection sort
#include<stdio.h>
int main(){
    int n,i,j,temp,minIndex;
    printf("How many numbers u want to store : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //sorting
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    printf("Elements in sorted order\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}