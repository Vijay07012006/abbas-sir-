// print fibonacci series in pyramid.
#include <stdio.h>

int main() {
    int i, j, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n");
    }

    return 0;
}
