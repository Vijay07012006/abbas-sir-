#include <stdio.h>

int main() {
    char str[50], rev[50];
    int i, f = 0, l = 0, n = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline from fgets
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // find length of string
    for (i = 0; str[i] != '\0'; i++) {
        l++;
    }

    // reverse the string
    for (i = l - 1; i >= 0; i--) {
        rev[n] = str[i];
        n++;
    }
    rev[n] = '\0';

    // compare original and reversed string
    for (i = 0; i < l; i++) {
        if (str[i] != rev[i]) {
            f = 1;
            break;
        }
    }

    if (f == 0)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}
