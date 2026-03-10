//WAP to find greatest number in three unequal numbers
#include<stdio.h>
main(){
    int a,b,c;
    printf("Enter Three NUmbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Greatest Number=%d\n",a);
        }
        else{
            printf("Greatest Number=%d\n",c); 
        }
    }
    else{
        if(b>c){
            printf("Greatest Number=%d\n",b); 
            
        }
        else{
            printf("Greatest Number=%d\n",c); 

        }
    }
}