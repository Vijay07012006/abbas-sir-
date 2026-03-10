// WAP to implement binary search in array.
#include <stdio.h>
int main()
{
    int n, i, item, low, high, mid;
    printf("Enter how many numbers you want to store in array ? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers in ascending order\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be search : ");
    scanf("%d", &item);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == item)
        {
            printf("Number is found at position : %d\n", (mid + 1));
            return 0;
        }
        else if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Number is not found \n");
}