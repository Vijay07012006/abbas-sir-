// WAP to check given string is palindrome or not.
#include <string.h>
#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i, len = 0, k = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        rev[k] = str[i];
        k++;
    }
    rev[k] = '\0';
    if (strcmp(str, rev) == 0)
    {
        printf("String is Palindrome\n");
    }
    else
    {
        printf("String is not Palindrome\n");
    }
}