// WAP to find the factorial of givrn number using recursion
#include <stdio.h>
int fact(int n)
{
    if (n <= 1)     //Base case
    {
        return n;
    }
    return n * fact(n - 1);//Recursive call
}
int main()
{
    int a = 6, c;
    c = fact(a);
    printf("factorial is : %d", c);
}