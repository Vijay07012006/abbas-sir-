// Push , Pop and traverse
#include <stdio.h>
#define N 5
int main()
{
    int stack[N], i, top = -1, ch = 0, item;
    while (ch != 4)
    {
        printf("1-> Push\n");
        printf("2-> Pop\n");
        printf("3-> Traverse\n");
        printf("4-> Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (top == N - 1)
            {
                printf("Overflow\n");
            }
            else
            {
                top = top + 1;
                printf("Enter Element to insert : ");
                scanf("%d", &item);
                stack[top] = item;
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Underflow\n");
            }
            else
            {
                item = stack[top];
                printf("Deleted item=%d\n", item);
                top = top - 1;
            }
            break;
        case 3:
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Elements in stack :\n");
                for (i = top; i>=0;i--)
                {
                    printf("%d\n", stack[i]);
                }
            }
            break;
        case 4:
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}