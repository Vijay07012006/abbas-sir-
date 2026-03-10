//WAP to concatenate two string
#include<stdio.h>
#include<string.h>
main(){
    char fname[50],lname[50];
    printf("Enter first name : ");
    fgets(fname,sizeof(fname),stdin);
    printf("Enter last name : ");
    fgets(lname,sizeof(lname),stdin);
    strcat(fname,lname);
    printf("Your full name : %s\n",fname);
}