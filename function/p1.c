// WAP to find sun of two numbers using user defined function.

#include <stdio.h>
int add(int a, int b) // here a and b are formal parameters
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mult(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}
int main()
{
    int x, y, Sum, Sub, Mult, Div, Mod;
    printf("enter two number: \n");
    scanf("%d%d", &x, &y);
    Sum = add(x, y); // here x and y are actual parameters
    Sub = sub(x, y);
    Mult = mult(x, y);
    Div = div(x, y);
    Mod = mod(x, y);
    printf("Summation=%d\n", Sum);
    printf("Subtraction=%d\n", Sub);
    printf("Multiplication=%d\n", Mult);
    printf("Division=%d\n", Div);
    printf("Modulus=%d\n", Mod);
}