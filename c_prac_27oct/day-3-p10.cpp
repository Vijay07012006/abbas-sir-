#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, space = 0, sc = 0;
    printf("ENter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            if (str[i] != (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0'))
            {sc++;}
        }
    }
    printf("Spaces=%d\n", space);
    printf("Special characters=%d\n", sc);
}