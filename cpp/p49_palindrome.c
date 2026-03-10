//WAP to check given string is palindrome or not
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
main(){
    
    char str[50],rev[50];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';

    strcpy(rev,str);
    strrev(rev);

    if(strcmp(str,rev)==0){
        printf("palindrome\n");

    }
    else{
        printf("non palindrome\n");
    }
}