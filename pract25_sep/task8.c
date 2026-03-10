#include<stdio.h>
// #include<string.h>
void rev(char *s){
    int l=0,i,n=0;
    char revstr[50];
    while(*s !='\0'  && s[l] != '\n'){
        l++;
    }
    for(i=l-1;i>=0;i--){
        revstr[n]=s[i];
        n++;
    }
    revstr[i]='\0';
    printf("Length=%d\n",l);
     printf("Reverse = %s\n", revstr);
}
int main(){
    char str[50];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    rev(str);
    
}