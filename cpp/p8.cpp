// WAP to find greatest number in two unequal number
#include <stdio.h>
main()
{
    int a, b;
    printf("Enter two Numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("Greatest number=%d\n", a);
    }
    else
    {
        printf("Greatest number=%d\n", b);
    }
}