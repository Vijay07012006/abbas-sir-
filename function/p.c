#include <stdio.h>
int main() {
    int a = 12, b = 6;
    printf("a & b = %d\n", a & b); // AND
    printf("a | b = %d\n", a | b); // OR
    printf("a ^ b = %d\n", a ^ b); // XOR
    printf("~a = %d\n", ~a); // NOT
    printf("a << 2 = %d\n", a << 2); // Left shift
    printf("a >> 2 = %d\n", a >> 2); // Right shift
    return 0;
}
