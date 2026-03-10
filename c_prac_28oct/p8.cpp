// WAP to find maximum and minimum number in array.
#include <stdio.h>
int main()
{
    int n, max, min, i;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    int ARR[n];
    printf("Enter %d numbers :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ARR[i]);
    }
    min = max = ARR[0];
    for (i = 0; i < n; i++)
    {
        if (max < ARR[i])
        {
            max = ARR[i];
        }
        if (min > ARR[i])
        {
            min = ARR[i];
        }
    }
    printf("Maximium number in Array=%d\n", max);
    printf("Minimum number in Array=%d\n", min);
}