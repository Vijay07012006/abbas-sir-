// WAP to copy one string into another string using function and pointer.
#include <stdio.h>
#include<string.h>
void xstrcpy(char *, char *);
int main()
{
    char str1[50], str2[50];
    printf("Enter a string : ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    xstrcpy(str2, str1);
    printf("Source string =%s\n", str1);
    printf("Target string =%s\n", str2);
}
void xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t='\0';
}