//WAP to print series of prime numbers in givin range.
#include<stdio.h>
int main(){
    int beg,end,i,j,c;
    printf("Enter lower limit: ");
    scanf("%d",&beg);
    printf("Enter upper limit: ");
    scanf("%d",&end);
    for(i=beg;i<=end;i++){
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
       if(c==2){
         printf("%d ",i);
       }
    }
}