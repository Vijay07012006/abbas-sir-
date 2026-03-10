// In Question 10 add option delete after specific node.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *start = NULL, *ptr, *newnode, *deletenode;
    int i, ch = 0, item, value;
    while (ch != 5)
    {
        printf("1-> Insert as a first node\n");
        printf("2-> Insert a newnode after given node\n");
        printf("3-> delete a node after given node\n");
        printf("4->traverse\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Memory allocation failed\n");
            }
            else
            {
                printf("Enter a number : ");
                scanf("%d", &item);
                newnode->data = item;
                newnode->next = start;
                start = newnode;
            }
            break;
        case 2:
            ptr = start;
            if (start == NULL)
            {
                printf("Linked list is empty choose choice (1)\n");
            }
            else
            {
                printf("Enter a value to search in linked list : ");
                scanf("%d", &value);
                while (ptr != NULL && ptr->data != value)
                {
                    ptr = ptr->next;
                }
                if (ptr == NULL)
                {
                    printf("Number is not found\n");
                }
                else
                {
                    newnode = (struct node *)malloc(sizeof(struct node));
                    printf("Enter a number to insert : ");
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
                printf("Linked list is empty\n");
            }
            else
            {
                printf("Enter a value to search in linked list : ");
                scanf("%d", &value);
                while (ptr != NULL && ptr->data != value)
                {
                    ptr = ptr->next;
                }
                if (ptr == NULL)
                {
                    printf("Number is not found\n");
                }
                else
                {
                    deletenode = (struct node *)malloc(sizeof(struct node));
                    deletenode = ptr->next;
                    ptr->next = deletenode->next;
                    free(deletenode);
                }
            }
            break;
        case 4:
            ptr = start;
            if (ptr == NULL)
            {
                printf("Linked list is empty\n");
            }
            else
            {
                printf("Elements in linked list\n");
                while (ptr != NULL)
                {
                    printf("%d\n", ptr->data);
                    ptr = ptr->next;
                }
            }
            break;
        case 5:
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}