// WAP to print series of prime numbers in given range.
#include <stdio.h>
int main()
{
    int start, end, i, j, c = 0;
    printf("Enter starting number : ");
    scanf("%d", &start);
    printf("Enter ending number : ");
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
            printf("Prime no's  is %d \n", i);
        }
    }
}