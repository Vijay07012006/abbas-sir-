//WAP a program to  store five numbers in an array and find min number.
#include <stdio.h>
int main()
{
    int arr[5], i, min;
    printf("Enter five numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Logic to find minimum number
    min = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum number is: %d\n", min);
}