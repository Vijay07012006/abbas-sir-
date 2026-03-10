//WAP to reverse the string.
#include<stdio.h>
#include<string.h>
void strrev(char *str){
    int i=0,j=0;
    char temp;
    while(str[j]!='\0'){
        j++;
    }
    j=j-1;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main (){
    char str[100];
    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);
    strrev(str);
    printf("Reverse string=%s",str);
}