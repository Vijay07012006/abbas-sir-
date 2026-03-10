// WAP to check given number is Armstrong or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, d, c = 0, Arm = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    n = temp;
    while (n != 0)
    {
        d = n % 10;
        Arm = Arm + pow(d, c);
        n = n / 10;
    }
    if (Arm == temp)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is not Armstrong\n");
    }
}
