//WAP to count vowels in a sentence.
#include<stdio.h>
int main(){
    char str[100];
    int vc=0,i;
    printf("Enter a sentence : ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!=0;i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u' || str[i]=='A'||str[i]=='E' ||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                vc++;
            }
        }
    }
    printf("Number of vowelcounts :%d\n",vc);
}