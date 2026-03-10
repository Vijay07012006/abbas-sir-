// Call by reference
#include <stdio.h>
int fun(int *a, int *b) //formal parameter
{
    *a = 10;
    printf("%d\n", *a + *b);
    return 0;
}
int main()
{
    int x = 5, y = 6;
    fun(&x, &y);    // actual parameter
    printf("%d\n", x);
    return 0;
}