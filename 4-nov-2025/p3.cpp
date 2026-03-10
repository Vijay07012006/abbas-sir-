//WAP to find length of string using function & pointer.
#include<stdio.h>
#include<string.h>
int xstrlen(char *);
int main(){
    char str[100];
    int lenght=0;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    lenght =xstrlen(str);
    printf("Lenght of string=%d\n",lenght);
}
int xstrlen(char *s){
    int len=0;
    while(*s!='\0'){
        len++;
        s++;
    }
    return len;
}