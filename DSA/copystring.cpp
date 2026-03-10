// WAP to create a function to copy one string to another.
#include <stdio.h>
#include <string.h>
void xstrcpy(char target[], const char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}
int main()
{
    char source[100], target[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    xstrcpy(target, source);
    printf("Source string : %s\n", source);
    printf("Copied string : %s\n", target);
    
}
