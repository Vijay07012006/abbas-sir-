#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], i = 0, k = 0;
    printf("Enter first string : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[k]!='\0'){
        str1[i++]=str2[k++];
    }
    printf("Merged string=%s\n",str1);
}