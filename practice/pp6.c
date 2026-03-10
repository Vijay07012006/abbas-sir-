// prime number in range.
#include <stdio.h>

int main() {
    int start, end, i, j, c;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2) {
            continue; // prime 2 se start hote hain
        }

        c = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                c++;
            }
        }

        if (c == 2) {  // prime ke sirf 2 factors hote hain (1 aur wo khud)
            printf("%d ", i);
        }
    }

    return 0;
}
