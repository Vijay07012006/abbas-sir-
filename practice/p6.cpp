//search an element in an array(Linear search).
#include <stdio.h>
int main()
{
    int arr[10], i, num, found = 0;
    printf("Enter numbers of elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &num);      
    //search the element
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
    }
    if (found=1)
        printf("Element %d found in the array.\n", num);
    else
        printf("Element %d not found in the array.\n", num);
}   