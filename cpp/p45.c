// WAP to copy one string to another.
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter first string : ");
    fgets(str1, sizeof(str1), stdin);
    strcpy(str2, str1);
    printf("first String=%s", str1);    //%s is used to print string
    printf("second String=%s", str2);
}