#include<stdio.h>
#include<string.h>
int main(){
    char str[100],copy[100],i,k=0,l=0;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    for(i=0;i<l;i++){
        copy[k]=str[i];
        k++;
    }
    copy[k]='\0';
    printf("Original string=%s\n",str);
    printf("Copied string=%s\n",copy);

}