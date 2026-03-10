#include<stdio.h>
#include<string.h>
int main(){
    char str[100],i,l=0;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    printf("length of string=%d\n",l);
}