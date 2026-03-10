// WAP to create an Array of n numbers. Now sort array in ascending order using Bubble sort , then search a number in array by using Binary search.
#include <stdio.h>
int main()
{
    int n, i, j, temp,low,high,mid ,item;
    printf("how many numbers you want to insert in array ? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers in array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n ; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Elements in sorting order\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Enter a number to search in array : ");
    scanf("%d",&item);
    low=0;
    high=n-1;
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

