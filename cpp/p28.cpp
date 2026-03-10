// WAP to store five numbers in an array and find max number
#include <stdio.h>
int main()
{
    int arr[5], i, max;
    printf("Enter five numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Logic to find maximum number
    max = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum number is: %d\n", max);
}