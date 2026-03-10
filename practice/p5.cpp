// count the total number of even and odd elements in an array.
#include <stdio.h>
int main()
{
    int arr[10], i, even_count = 0, odd_count = 0;
    printf("Enter numbers of elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // count even and odd elements
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Total even elements: %d\n", even_count);
    printf("Total odd elements: %d\n", odd_count);
}