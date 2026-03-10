//WAP to copy one string to another string without using built-in functions.
#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter first string : ");
    fgets(str1,sizeof(str1),stdin);
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("first string=%s\n",str1);
    printf("second string=%s\n",str2);

}