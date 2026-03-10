// 3.WAP to find factorial of given number using recursion.
#include <stdio.h>
int fact(int n)
{
    if (n <= 1) 
    {
        return n;
    }
    return n * fact(n - 1);
}
int main()
{
    int a, c;
    printf("Enter a number : ");
    scanf("%d",&a);
    c = fact(a);
    printf("factorial is : %d", c);
}