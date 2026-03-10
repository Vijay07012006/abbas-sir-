// Queue insert , delete , and traverse
#include <stdio.h>
#define N 5
int main()
{
    int queue[N], i, rear = -1, front = -1, item, ch = 0;
    while (ch != 4)
    {
        printf("1-> Insert\n");
        printf("2-> Delete\n");
        printf("3-> traverse\n");
        printf("4-> Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if ((front == 0 && rear == N - 1) || (front == rear + 1))
            {
                printf("Overflow\n");
            }
            else
            {
                if (front == -1 && rear == -1)
                {
                    rear = 0;
                    front = 0;
                }
                else if (rear == N - 1)
                {
                    rear = 0;
                }
                else
                {
                    rear = rear + 1;
                    printf("Enter an Element to insert : ");
                    scanf("%d", &item);
                    queue[rear] = item;
                }
            }
            break;
        case 2:
            if (front == -1)
            {
                printf("Underflow\n");
            }
            else
            {
                item = queue[front];
                printf("Deleted element=%d\n", item);
                if (front == rear)
                {
                    front = -1;
                    rear = -1;
                }
                else if (front == N - 1)
                {
                    front = 0;
                }
                else
                {
                    front = front + 1;
                }
            }
            break;
        case 3:
            if (front == -1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Elements in Queue : \n");
                if (front <= rear)
                {
                    for (i = front; i <= rear; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
                }
                else
                {
                    for (i = front; i <= N - 1; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
                    for (i = 0; i <= front; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
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