//calculate the sum and average of elements of an array.
#include <stdio.h>
int main()
{
    int arr[10], i, sum = 0;
    float avg;
    printf("Enter 10 elements in the array:");
    for (i = 0; i < 10; i++)    
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 10.0;
    printf("Sum of elements is %d\n", sum);
    printf("Average of elements is %.2f\n", avg);
}