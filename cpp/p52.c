//WAP to concatenate two strings.
#include<stdio.h>
#include<string.h>
main(){
    char fname[50],lname[25];
    int i,l=0;
    printf("Enter first name : ");
    fgets(fname,sizeof(fname),stdin);
    printf("Enter last name : ");
    fgets(lname,sizeof(lname),stdin);
    for(i=0;fname[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;lname[i]!='\0';i++)
    {
       fname[l]= lname[i];
        l++;
    }
    fname[l]='\0';
    printf("Full name : %s\n",fname);

}