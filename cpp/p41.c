//WAP to find lenght of string.
#include <stdio.h>
#include <string.h>
main(){
    char sen[100];
    int len;
    printf("Enter a string : ");
   fgets(sen,sizeof(sen),stdin);
    len = strlen(sen);
    printf("length of string is %d",len);
}