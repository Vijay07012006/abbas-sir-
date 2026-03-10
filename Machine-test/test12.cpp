//WAP to create an array of ten numbers .NOW find second smallest and second largest number.
#include <stdio.h>
int main()
{
    int n, i;
    printf("How many numbers you want to store : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d numbers in array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int second_largest = smallest;
    int second_smallest = largest;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
        if (arr[i] < second_smallest && arr[i] > smallest)
        {
            second_smallest = arr[i];
        }
    }
    printf("\nLargest number is: %d\n", largest);
    printf("Smallest number is: %d\n", smallest);
    printf("Second largest number is: %d\n", second_largest);
    printf("Second smallest number is: %d\n", second_smallest);

    return 0;
}
