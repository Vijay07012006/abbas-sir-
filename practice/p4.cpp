//reverse the elements of an array.
#include <stdio.h>
int main()
{
    int arr[10], i, j, temp;
    printf("Enter numbers of elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    //reverse the array
    for (i = 0, j = 9; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];    
        arr[j] = temp;
    }
    printf("Elements in array after reversing are: ");
    for (i = 0; i < 10; i++)    
    {
        printf("%d ", arr[i]);
    }
}