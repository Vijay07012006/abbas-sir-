// WAP to check a string is palindrome or not.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i = 0, len = 0, k = 0;
    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    // remove newline (\n) if fgets adds it
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
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }
    return 0;
}
