//WAP to print the triangle by recursion
#include <stdio.h>
int fun(int n)
{
    if (n == 5)
    {
        return n;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("* ");
    }
    printf("\n");
    return fun(n + 1);
}
int main()
{
    int n = 1;
    fun(n);
}