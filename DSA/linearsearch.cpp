// WAP to implement linear search .
#include <stdio.h>
int main()
{
    int n, i, item;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an element to search in array : ");
    scanf("%d", &item);
    for (i = 0; i < n; i++)
    {
        if (item == arr[i])
        {
            printf("Number is found at postion %d\n", (i + 1));
            return 0;
        }
    }
    printf("Number is not found\n");
}