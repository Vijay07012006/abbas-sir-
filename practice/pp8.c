// //find dublicate elements.
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int freq[256] = {0};  // ASCII chars count
//     int i;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Count frequency of each char
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ' ' && str[i] != '\n') { // space aur newline ignore
//             freq[(unsigned char)str[i]]++;
//         }
//     }

//     printf("Duplicate characters are:\n");
//     for (i = 0; i < 256; i++) {
//         if (freq[i] > 1) {
//             printf("%c -> %d times\n", i, freq[i]);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Duplicate characters are:\n");

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        // Skip space and newline
        if (str[i] == ' ' || str[i] == '\n')
            continue;

        // Check if already counted
        if (str[i] == '0')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';  // mark as counted
            }
        }

        if (count > 1) {
            printf("%c -> %d times\n", str[i], count);
        }
    }

    return 0;
}
