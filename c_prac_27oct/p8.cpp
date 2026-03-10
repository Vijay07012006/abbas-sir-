//WAP to insert a new node as first node in linkedlist also perform traverse operation.
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
            newnode->next = start;
            start = newnode;
            break;
        case 2:
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
        case 3:
            break;
        default:
            printf("choice not valid\n");
            break;
        }
    }
}