// WAP to swap two numbers using function & pointer.
#include <stdio.h>
void swap(int *, int *);
int main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Numbers  Before swapping:\n");
    printf("First number = %d\n", n1);
    printf("Second number = %d\n", n2);
    swap(&n1, &n2);
    printf("Numbers  After swapping:\n");
    printf("First number = %d\n", n1);
    printf("Second number = %d\n", n2);
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
