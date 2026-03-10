//WAP to print numbers in givin range.
#include<stdio.h>
 int main(){
    int start,end,i;
    printf("Enter Lower number : ");
    scanf("%d",&start);
    printf("Enter upper number : ");
    scanf("%d",&end);
    i=start;
    while(i<=end){
        printf("%d ",i);
        i++;
    }
}