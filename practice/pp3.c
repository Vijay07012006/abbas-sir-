// Check for Anagram.
#include <stdio.h>
#include <string.h>
// Function to sort a string alphabetically
void sortString(char str[])
{
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            { // Swap if out of order
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter first string\n : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string\n : ");
    fgets(str2, sizeof(str2), stdin);
    sortString(str1);
    sortString(str2);
    // printf("%s", str1);
    // printf("%s", str2);
    if (strcmp(str1, str2) == 0)
        printf("Yes, Anagram\n");
    else
        printf("Not Anagram\n");
}