// WAP to find the length of string using user defined function
#include <stdio.h>

int xstrlen(char *s)
{
    int l = 0;
    while (*s != '\0')
    {
        l++;
        s++;
    }
    return l;
}
int main()
{
    char str[100];
    int l;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // fgets ke karan newline remove karna zaroori hai
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    l = xstrlen(str);
    printf("Length of string: %d\n", l);
    return 0;
}
