#include <stdio.h>
#include <string.h>

int Ispalindrome(char str[100], char rev[100]) {
    int i, len = 0, k = 0;

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    for (i = len - 1; i >= 0; i--) {
        rev[k] = str[i];
        k++;
    }
    rev[k] = '\0'; 

    if (strcmp(str, rev) == 0) {
        return 1;
    } else {
        return 0; 
    }
}
int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (Ispalindrome(str, rev)) {
        printf("String is Palindrome\n");
    } else {
        printf("String is not Palindrome\n");
    }
    return 0;
}
