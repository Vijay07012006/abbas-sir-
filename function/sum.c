// WAP to find sum of n numers
#include <stdio.h>
int sum(int a)
{
    if (a <= 1)
        return a;
    return a + sum(a-1);
}
int main()
{
    int n = 10, c;
    c = sum(n);
    printf("Summation :%d", c);
}