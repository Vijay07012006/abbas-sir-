// WAP to create an array of ten numbers by user input.NOW search a number using binary search.
#include <stdio.h>
int main()
{
    int n, i, low, high, mid,item;
    printf("how many number u want you to store : ");
    scanf("%d", &n);
    int arr[i];
    printf("Enter %d numbers in ascending order\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search : ");
    scanf("%d",&item);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid=(low+high)/2;
        if(arr[mid]==item){
            printf("Number is searched at position :%d\n",(mid+1));
            return 0;
        }
        else if(arr[mid]>item){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}