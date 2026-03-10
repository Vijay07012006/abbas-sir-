// //longest word in a sentence.
// #include <stdio.h>
// #include <string.h>

// // Helper function: reverse a part of string
// void reverse(char str[], int start, int end) {
//     char temp;
//     while (start < end) {
//         temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }
// // Function to reverse each word in a string
// void reverseEachWord(char str[]) {
//     int i = 0, start = 0;

//     while (str[i] != '\0') {
//         if (str[i] == ' ' || str[i] == '\n') {
//             reverse(str, start, i - 1);
//             start = i + 1;  // next word start
//         }
//         i++;
//     }
//     // Last word reverse (because last word ke baad space nahi hota)
//     reverse(str, start, i - 1);
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     reverseEachWord(str);
//     printf("Reversed each word: %s\n", str);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';  // end current word
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0;  // reset for next word
        } else {
            word[j] = str[i];
            j++;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[200], longest[200];
//     int i = 0, currentLength = 0, maxLength = 0, start = 0, maxStart = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     while (str[i] != '\0') {
//         if (str[i] != ' ' && str[i] != '\n') {
//             // character of a word
//             if (currentLength == 0)
//                 start = i; // starting index of word
//             currentLength++;
//         } else {
//             // end of a word
//             if (currentLength > maxLength) {
//                 maxLength = currentLength;
//                 maxStart = start;
//             }
//             currentLength = 0;
//         }
//         i++;
//     }

//     // Last word check (if string doesn't end with space)
//     if (currentLength > maxLength) {
//         maxLength = currentLength;
//         maxStart = start;
//     }

//     // Copy longest word
//     strncpy(longest, str + maxStart, maxLength);
//     longest[maxLength] = '\0';

//     printf("Longest word: %s\n", longest);
//     printf("Length: %d\n", maxLength);

//     return 0;
// }
