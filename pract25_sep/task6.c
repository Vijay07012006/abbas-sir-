/*
WAP to create a fnction search(),in search function pass two parameters first, an array of ten numbers and second,a number to search. if number is present in array return index of list otherwise return-1.
*/
#include <stdio.h>
int search(int arr[], int item)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == item)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int list[10], ele, i, res;
    printf("Enter 10 numbers to the list :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &list[i]);
    }
    printf("Enter the number to search in array : ");
    scanf("%d", &ele);
    res = search(list, ele);
    if (res != -1)
    {
        printf("The number %d is found at the location %d\n", ele, (res + 1));
    }
    else{
        printf("The no %d is not found:\n");
    }
}