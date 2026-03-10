// write a program to input and print elements of an array.
#include <stdio.h>
int main()
{
    int arr[10], i;
    printf("Enter numbers of elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}