// 3.WAP to check wheather a number is prime or not.
#include <stdio.h>
int main()
{
    int n, c = 0, i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            c++;
        }
        i++;
    }
    if (c == 2)
    {
        printf("number is prime\n");
    }
    else
    {
        printf("not a prime no\n");
    }
}
