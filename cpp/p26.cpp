// WAP to print series of prime number in  given range.
#include <stdio.h>
int main()
{
    int i, j, start, end, c = 0;
    printf("Enter starting number : ");
    scanf("%d", &start);
    printf("Enter end number : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d prime number\n", i);
        }
        else
        {
            printf("%d not a prime no\n", i);
        }
    }
}