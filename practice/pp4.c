// Reverse each Word in a string.(Important Question)
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start = 0, end = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    while (str[i] != '\0') {
        // When we reach space or newline, reverse the previous word
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;  // end of current word

            // Reverse current word
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // move start to next word
        }
        i++;
    }

    // For the last word (because it doesn't end with space)
    end = i - 1;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed each word: %s", str);
    return 0;
}
