#include <stdio.h>
int ch(int n)
{
    if (n == 10)
    {
        return n;
    }
    printf("%d", n);
    return ch(n+1);
}
int main()
{
    int a = 1;
    int c=ch(a);
    printf("%d",c);
}
