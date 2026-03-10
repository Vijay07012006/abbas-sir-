//WAP to create function rev() to reverese the string
#include <stdio.h>
void rev(char s[])
{
    int l = 0, i, n = 0;
    char revstr[50];
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    for (i = l - 1; i >= 0; i--)
    {
        revstr[n] = s[i];
        n++;
    }
    revstr[i] = '\0';
    printf("Length=%d\n", l);
    printf("Reverse = %s\n", revstr);
}
int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    rev(str);
}