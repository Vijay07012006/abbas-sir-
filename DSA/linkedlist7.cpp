// Linked list - insert , delete , and traverse
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    node *next;
};
int main()
{
    node *start = NULL, *newnode, *ptr, *deletenode;
    int item, value, ch = 0;
    while (ch != 0)
    {
        printf("1-> Insert as First Node\n");
        printf("2-> Insert after given Node\n");
        printf("3-> Delete after given node\n");
        printf("4-> Traverse\n");
        printf("5-> Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (node *)malloc(sizeof(node));
            printf("Enter an Element : ");
            scanf("%d", &item);
            newnode->data = item;
            newnode->next = start;
            start = newnode;
            break;
        case 2:
            ptr = start;
            if (ptr == NULL)
            {
                printf("Linked list is Empty choice 1\n");
            }
            else
            {
                printf("Enter element to search : ");
                scanf("%d", &value);
                while (ptr != NULL && ptr->data != value)
                {
                    ptr = ptr->next;
                }
                if (ptr == NULL)
                {
                    printf("Element is not found\n");
                }
                else
                {
                    newnode = (node *)malloc(sizeof(node));
                    printf("Enter an Element to insert : ");
                    scanf("%d", &item);
                    newnode->data = item;
                    newnode->next = ptr->next;
                    ptr->next = newnode;
                }
            }
            break;
        case 3:
            ptr = start;
            if (ptr == NULL)
            {
                printf("Linked list is Empty\n");
            }
            else
            {
                printf("Enter an Element to search : ");
                scanf("%d", &value);
                while (ptr != NULL && ptr->data != value)
                {
                    ptr = ptr->next;
                }
                if (ptr == NULL)
                {
                    printf("Element is not found \n");
                }
                else if (ptr->next == NULL)
                {
                    printf("No node after given node\n");
                }
                else
                {
                    deletenode =ptr->next;
                    printf("Deleted element : %d\n", deletenode->data);
                    ptr->next = deletenode->next;
                    free(deletenode);
                }
            }
            break;
        case 4:
            if (start == NULL)
            {
                printf("Linked list is Empty\n");
            }
            else
            {
                printf("Elements of Linked list\n");
                ptr = start;
                while (ptr != NULL)
                {
                    printf("%d", ptr->data);
                    ptr = ptr->next;
                }
            }
            break;
        case 5:
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
}