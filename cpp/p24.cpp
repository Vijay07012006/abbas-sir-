// WAP to print all even numbers in given range
#include <stdio.h>
int main()
{
    int  lowerno, upperno, i;
    printf("Enter Lower Number : ");
    scanf("%d", &lowerno);
    printf("Enter Upper Number : ");
    scanf("%d", &upperno);
    for (i = lowerno; i <= upperno; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
