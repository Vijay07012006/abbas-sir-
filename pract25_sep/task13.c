// WAP to take a sentence as input . Now count the words in sentence.
#include <stdio.h>
int main()
{
    char str[100];
    int wc = 0, i;
    printf("Enter a sentence : ");
    fgets(str, sizeof(str), stdin);
    // puts(str);
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            wc++;
        }
    }
    if(str[0] != '\0' && str[0] != '\n'){
        wc++;
    }
    printf("Total Words :%d", wc);
}