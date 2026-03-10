// WAP to compare two strings for equality without using built-in functions.
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, f = 0, l1, l2;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[l1] != '\0'; i++)
    {
        l1++;
    }
    for (i = 0; str2[l2] != '\0'; i++)
    {
        l2++;
    }
    if (l1 != l2)
    {
        printf("Both strings are not comparable.\n");
    }
    else
    {
        for (i = 0; i < l1; i++)
        {
            if (str1[i] == str2[i])
            {

                continue;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            printf("Both strings are equal.\n");
        }
        else
        {
            printf("Both strings are not equal.\n");
        }
    }
}