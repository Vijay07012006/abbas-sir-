//WAP to create a dynamic array using DMA
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *arr;
    printf("How many numbers in array ? ");
    scanf("%d",&n);
    arr=(int*)calloc(sizeof(int),n);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your have entered following numbers\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    free(arr);
}

