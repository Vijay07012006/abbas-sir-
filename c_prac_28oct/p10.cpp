// WAP to generate Fibonaaci series up to n terms. Value of n is entered by user.
#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, n3, i;
    printf("Enter number of terms to make a fibonacci series : ");
    scanf("%d", &n);
    printf("%d\n", n1);
    printf("%d\n", n2);
    for (i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }
}