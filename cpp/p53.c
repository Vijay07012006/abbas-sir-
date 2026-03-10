// WAp to count words in a sentence.
#include <stdio.h>
int main()
{
    char str[100];
    int wc = 0, i, len = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            wc++;
        }
    } 
    if (str[0] != '\0')
    {
        wc++;
    }
    printf("Number of words in the sentence :%d\n", wc);
}