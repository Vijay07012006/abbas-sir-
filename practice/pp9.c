// Count Vowels,consonants,digits,special chars
//  ex: Input:"Hello123!"
//  Output:Vowels=2,consonants=3,digits=3,special=1

#include <stdio.h>
int main() {
    char str[100];
    int i, vc = 0, cc = 0, d = 0, sp = 0;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check vowel
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vc++;
        }
        // Check consonant (only alphabets but not vowel)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            cc++;
        }
        // Check digit
        else if (ch >= '0' && ch <= '9') {
            d++;
        }
        // Otherwise special char (exclude newline from fgets)
        else if (ch != '\n') {
            sp++;
        }
    }

    printf("Vowels = %d\n", vc);
    printf("Consonants = %d\n", cc);
    printf("Digits = %d\n", d);
    printf("Special = %d\n", sp);

    return 0;
}
