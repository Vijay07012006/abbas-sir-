// WAP to copy one string into another using UDF.
void xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}
#include<stdio.h>
int main()
{
    char source[50], target[50];
    printf("Enter first String :");
    fgets(source, sizeof(source), stdin);
    xstrcpy(target, source);
    printf("first string=%s\n", source);
    printf("copied string=%s\n", target);
}
