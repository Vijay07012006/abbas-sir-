// WAP to input 5 numbers in an array and display them.
#include <stdio.h>
int main()
{
    int list[5], i;
    printf("Enter five numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &list[i]);
    }
    printf("YOu have entered following numbers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", list[i]);
    }
}