// WAP to sort elements of array using insertion sort.
#include <stdio.h>
int main()
{
    int n, i, j, key;
    printf("How many numbers you want to store ? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // code for insertion sort
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Sorted Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

/*
for(i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=i-1;
    }
        arr[j+1]=key;
}
*/