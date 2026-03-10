//WAP to copy one string into another by user defined function use concept of pointer also.
void vstrcpy(char *t, char *s)
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
    vstrcpy(target, source);
    printf("\nfirst string=%s", source);
    printf("copied string=%s\n", target);
}
