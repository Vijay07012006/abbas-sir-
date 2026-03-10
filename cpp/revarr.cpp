//reverse the elements of an array.
#include<stdio.h>
int main(){
    int arr[5],i,num;
    printf("Enter Five numbers :\n ");
   for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
   }
   printf("The numbers in reverse order are : ");
   for(i=4;i>=0;i--){
    printf("%d ",arr[i]);
   }
}