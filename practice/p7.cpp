//Copy all elements from one array to another array.
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], i;
    printf("Enter numbers of elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //copy elements from arr1 to arr2
    for (i = 0; i < 10; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Elements in second array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
}   