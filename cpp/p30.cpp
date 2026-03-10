//WAP to find sum and average of ten numbers using array
#include <stdio.h>
int main()
{
    int list[10],i,sum=0;
    float avg;  
    printf("Enter ten numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &list[i]);
        sum = sum + list[i];    
}
    avg =sum / 10.0;  // OR aise bhi likh sakte hai (float)sum/10; 
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}