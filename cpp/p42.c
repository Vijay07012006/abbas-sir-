//WAP to find length of string without using strlen() function.
#include<stdio.h>
main(){
    char sen[100];
    int i,len=0;
    printf("Enter a string : ");
    fgets(sen,sizeof(sen),stdin);
    for(i=0;sen[i]!='\0';i++){
        len++;
    }
    printf("length of string is %d",len);
}
