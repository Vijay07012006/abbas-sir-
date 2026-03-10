// WAP to create an array of ten numbers by user input. Now find sum and average.
#include <stdio.h>
int main()
{
    int ARR[10], i, sum = 0;
    float avg;
    printf("Enter 10 numbers :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ARR[i]);
        sum += ARR[i];
    }
    avg = sum / 10.;
    printf("SUM=%d\n", sum);
    printf("AVG=%.2f\n", avg);
}