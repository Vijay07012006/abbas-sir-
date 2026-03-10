// insert as a first node , delete as a first node, and traversal in linked list .
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *start = NULL, *ptr, *newnode;
    int ch = 0, item;
    while (ch != 4)
    {
        printf("1-> Insert\n");
        printf("2-> Delete\n");
        printf("3-> Traversal\n");
        printf("4-> Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Memort allocation failed\n");
            }
            else
            {
                printf("Enter an element to inset : ");
                scanf("%d", &item);
                newnode->data = item;
                newnode->next = start;
                start = newnode;
            }
            break;
        case 2:
            if (start == NULL)
            {
                printf("Linked list is empty\n");
            }
            else
            {
                ptr = start;
                start = ptr->next;
                printf("Deleted item=%d\n", ptr->data);
                free(ptr);
            }
            break;
        case 3:
            ptr = start;
            if (ptr == NULL)
            {
                printf("Linked list is empty\n");
            }
            else
            {
                printf("Elements in linked list : \n");
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