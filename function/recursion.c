// segmentation fault
#include <stdio.h>
int fun(int n)
{
    if (n == 10)    //base case
    {
        return n;
    }

    printf("%d", n);
    return fun(n + 1);  //recusive cal
}
int main()
{
    int a = 1, c;
    c = fun(a);
    printf("%d", c);
}