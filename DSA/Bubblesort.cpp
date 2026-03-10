// WAP to sort array elements in ascending order using bubble sort.
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("how many numbers you want to insert in array ? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers in array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // code for sorting
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
}

