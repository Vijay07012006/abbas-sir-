//WAP to check given string is palindrome or not using function and pointer.
#include<stdio.h>
#include<string.h>
int Ispalindrome(char *str , char *rev){
    int i,j=0,l=0;
    for(i=0;str[i]!='\0';i++){
       l++;
    }
    for(i=l-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    if(strcmp(str,rev)==0){
        return 1;
    }
    else
    {
        return 0;
    }

}
int main(){
    char str[100],rev[100],c;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    c=Ispalindrome(str,rev);
    if(c==1){
        printf("String is palindrome\n");
    }
    else{
        printf("String is not palindrome\n");
    }

}