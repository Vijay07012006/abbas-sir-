    // WAP to perform insert  as a first node,delete as a first node  and traversal in linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
};

int main()
{
    struct node *start = NULL, *newnode, *ptr;
    char item;
    int ch = 0;
    while (ch != 4)
    {
        printf("1-> Insert\n");
        printf("2-> Delete\n");
        printf("3-> Traverse\n");
        printf("4-> Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // Insertion operation
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Memory allocation failed\n");
                break;
            }

            printf("Enter an element to insert : ");
            scanf(" %c", &item); // 
            newnode->data = item;
            newnode->next = start;
            start = newnode;
            break;

        case 2:
            // Deletion operation
            ptr = start;
            if (start == NULL)
            {
                printf("Linked List is Empty\n");
            }
            else
            {
                start = ptr->next;
                printf("Deleted item : %c\n", ptr->data);
                free(ptr);
            }
            break;

        case 3:
            // Traversal operation
            ptr = start;
            if (start == NULL)
            {
                printf("Linked List is Empty\n");
            }
            else
            {
                printf("Elements of Linked list:\n");
                while (ptr != NULL)
                {
                    printf("%c\n", ptr->data);
                    ptr = ptr->next;
                }
            }
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Choice not valid\n");
            break;
        }
    }
    return 0;
}


