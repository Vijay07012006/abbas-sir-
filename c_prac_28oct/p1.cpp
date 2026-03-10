// WAP to check given number is Armstrong or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, arm, d, c = 0, temp;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        c++;
    }
    temp = n;
    arm = 0;
    while (temp > 0)
    {
        d = temp % 10;
        arm = arm + pow(d, c);
        temp = temp / 10;
    }
    if (arm == n)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is NOT an Armstrong number\n", n);
    }
}
