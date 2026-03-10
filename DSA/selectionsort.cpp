//WAP to create an array of five numbers. Now sort array elements using selection sort.
#include<stdio.h>
int main(){
    int n,i,j,temp,minindex;
    printf("How many numbers u want to store : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        minindex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    printf("Elements in sorted order\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}