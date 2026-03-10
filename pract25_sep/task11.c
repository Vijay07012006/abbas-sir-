//WAP to create an array of n numbers by user input, now count occurrence of given number.
#include<stdio.h>
int main(){
    int n,i,item,count=0;
    printf("Enter how many numbers you want : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to check how many times that number occur : ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==arr[i]){
            count++;
             
        }
    }
    printf("no  %d  is repeated by %d times in array",item,count);
   
}

// #include<stdio.h>
// int main(){
//     int n,i,ele,c=0;
//     printf("How many numbers you want in array? : ");
//     scanf("%d",&n);
//     int arr[i];
//     printf("Enter %d numbers :",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter a number to check in array : ");
//     scanf("%d",&ele);
//     for(i=0;i<n;i++){
//         if(ele==arr[i]){
//             c++;
//         }
//     }
//     printf("Number of Occurrance=%d",c);
// }