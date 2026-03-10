// WAP to compare two string for equality.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);   //we can use gets() also but  here not work because of C17 standard
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);  
    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal.\n");
    else
        printf("Both strings are not equal.\n");
}