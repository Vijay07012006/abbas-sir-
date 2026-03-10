//WAP to compare two string for equality using user defined function.
#include <stdio.h>
#include<string.h>
void xstrcmp(char str1[], char str2[]) {
    int i = 0, flag = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0 ) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  
    xstrcmp(str1, str2);
}
