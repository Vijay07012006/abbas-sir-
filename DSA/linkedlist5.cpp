// WAP to insert , delete and traverse node as last node in linkedlist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    node *next;
};
int main()
{
    node *start = NULL, *newnode, *ptr;
    int item, ch = 0;

    while (ch != 4)
    {
        printf("1-> Insert as last node\n");
        printf("2-> delete as last node\n");
        printf("3-> Traverse\n");
        printf("4->Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (node *)malloc(sizeof(node));
            printf("Enter an element : ");
            scanf("%d", &item);
            newnode->data = item;
            newnode->next = NULL;
            if (start == NULL)
            {
                start = newnode;
            }
            else
            {
                ptr = start;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = newnode;
            }
            break;
        case 2:
            if (start == NULL)
            {
                printf("Linkedlist is Empty\n");
            }
            else if (start->next == NULL)
            {
                printf("Deleted element=%d\n", start->data);
                free(start);
                start = NULL;
            }
            else
            {
                ptr = start;
                while (ptr->next->next != NULL)
                {
                    ptr = ptr->next;
                }

                printf("Deleted element=%d\n", ptr->next->data);
                free(ptr->next);
                ptr->next = NULL;
            }
            break;
        case 3:
            if (start == NULL)
            {
                printf("LINKED LIST IS EMPTY\n");
            }
            else
            {
                ptr = start;
                printf("Elements of linked list\n");
                while (ptr != NULL)
                {
                    printf("%d\n", ptr->data);
                    ptr = ptr->next;
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