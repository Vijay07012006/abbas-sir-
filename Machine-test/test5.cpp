//WAP to create an array AR with size 10.Now copy even  numbers in array EAR and odd numbers in array OAR.
#include<stdio.h>
int main(){
    int AR[10],EAR[10],OAR[10],i,j=0,k=0;
    printf("Enter 10 number in array\n");
    for(i=0;i<10;i++){
        scanf("%d",&AR[i]);
    }
    for(i=0;i<10;i++){
        if(AR[i]%2==0){
            EAR[j]=AR[i];
            j++;
        }
        else{
            OAR[k]=AR[i];
            k++;
        }
    }
    printf("Even numbers :\n");
    for(i=0;i<j;i++){
        printf("%d\n",EAR[i]);
    }
    printf("Odd numbers :\n");

    for(i=0;i<k;i++){
        printf("%d\n",OAR[i]);
    }

}