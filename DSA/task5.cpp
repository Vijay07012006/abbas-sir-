// 5.Insert node at beginning and end also perform traverse operation.
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
        printf("1-> Insert as a first node\n");
        printf("2-> Insert as a last node\n");
        printf("3-> Traverse\n");
        printf("4-> Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (node *)malloc(sizeof(node));
            printf("Enter a element to insert : ");
            scanf("%d", &item);
            newnode->data = item;
            newnode->next = start;
            start = newnode;
            break;
        case 2:
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
        case 3:
            if (start == NULL)
            {
                printf("Linked List is Empty\n");
            }
            else
            {
                ptr = start;
                printf("Elements of Linked list\n");
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
            printf("choice not valid\n");
            break;
        }
    }
}