// WAP to insert as first node,insert as given node and traverse
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
    int item, ch = 0, value;
    while (ch != 4)
    {
        printf("1-> Insert as a First node\n");
        printf("2-> Insert after given node\n");
        printf("3-> Traverse\n");
        printf("4-> Exit\n");
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
                printf("List is Empty use choice 1\n");
            }
            else
            {
                printf("Enter Element to search : ");
                scanf("%d", &value);
                while (ptr != NULL && ptr->data != value)
                {
                    ptr = ptr->next;
                }
                if (ptr == NULL)
                {
                    printf("Element is not Found\n");
                }
                else
                {
                    newnode = (node *)malloc(sizeof(node));
                    printf("Enter element to insert : ");
                    scanf("%d", &item);
                    newnode->data = item;
                    newnode->next = ptr->next;
                    ptr->next = newnode;
                }
            }
            break;
        case 3:
            if (ptr == NULL)
            {
                printf("Linked list is Empty\n");
            }
            else
            {
                printf("Element of List\n");
                ptr = start;
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
            printf("Invalid Choice\n");
            break;
        }
    }
}