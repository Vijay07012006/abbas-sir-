// find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
    int arr[10], i, max, min;
    printf("Enter 10 elements in the array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            printf("Maximum element is %d\n", max);
        }
        if (arr[i] < min)
        {
            min = arr[i];
            printf("Minimum element is %d\n", min);
        }
    }
}