// WAP to insert and traverse node as last node
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
    while (ch != 3)
    {
        printf("1->Insert a last newnode\n");
        printf("2->Traverse the elements\n");
        printf("3->Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (node *)malloc(sizeof(node));
            printf("Enter a element : ");
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
                printf("LINKED LIST IS EMPTY\n");
            }
            else
            {
                ptr = start;
                printf("Elements in linked list\n");
                while (ptr != NULL)
                {
                    printf("%d\n", ptr->data);
                    ptr = ptr->next;
                }
            }
            break;
            case 3:
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    }
}

