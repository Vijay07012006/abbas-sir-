// QUEUE IMPLEMENTATION
#include <stdio.h>
#define N 5
int main()
{
    int queue[N], i, item, ch = 0, front = -1, rear = -1;
    while (ch != 4)
    {
        printf("1-> Insert\n");
        printf("2-> Delete\n");
        printf("3-> Traverse\n");
        printf("4-> Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if ((front == 0 && rear == N - 1) || (front == rear + 1))
            {
                printf("OVERFLOW\n");
            }
            else
            {
                if (front == -1 && rear == -1)
                {
                    front = 0;
                    rear = 0;
                }
                else if (rear == N - 1)
                {
                    rear = 0;
                }
                else
                {
                    rear = rear + 1;
                }
                printf("Enter an element to insert: ");
                scanf("%d", &item);
                queue[rear] = item;
            }
            break;
        case 2:
            if (front == -1)
            {
                printf("UNDERFLOW\n");
            }
            else
            {
                item = queue[front];
                printf("Deleted Item=%d\n", item);
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
                printf("Queue is Empty\n");
            }
            else
            {
                printf("Elements of queue\n");
                if (front <= rear)
                {
                    for (i = front; i <= rear; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
                }
                else
                {
                    for (i = front; i < N - 1; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
                    for (i = 0; i <= rear; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
                }
            }
            break;
        case 4:
            break;
        default:
            printf("Choice not valid\n");
            break;
        }
    }
}