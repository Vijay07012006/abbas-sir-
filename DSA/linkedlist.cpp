// WAP to perform insert newnode as a last node and traversal in linked list.
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
        printf("1-> Insert\n");
        printf("2-> Traverse\n");
        printf("3-> Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (node *)malloc(sizeof(node));
            printf("Enter a element to insert : ");
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
                printf("List is Empty\n");
            }
            else
            {
                ptr = start;
                printf("Elements of list\n");
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
            printf("choice not valid\n");
            break;
        }
    }
}