#include <stdio.h>
int main() {
    int n, i, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Number is not prime");
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            f = 1;
            break;
        }
    }

    if (f == 0)
        printf("Number is prime");
    else
        printf("Number is not prime");
}
