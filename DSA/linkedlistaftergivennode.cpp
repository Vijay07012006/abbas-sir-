// WAP to create a linked list by insert after specific node and traverse it.
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
    int i, ch = 0, item, value;
    while (ch != 4)
    {
        printf("1-> Insert as a first node\n");
        printf("2-> Insert a node after a node\n");
        printf("3-> Traverse\n");
        printf("Enter your choice : \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Memory alloaction failed\n");
            }
            printf("Enter a number : ");
            scanf("%d", &item);
            newnode->data = item;
            newnode->next = start;
            start=newnode;
            break;
        case 2:
            ptr = start;
            if (start == NULL)
            {
                printf("List is empty now choose choice (1) to insert node\n");
            }
            else
            {
                printf("Enter a value to search in linked list : ");
                scanf("%d", &value);
                if (ptr != NULL && ptr->data != value)
                {
                    ptr = ptr->next;
                }
                if (ptr == NULL)
                {
                    printf("Number is not found\n");
                }
                printf("Enter a number to insert after %d : ", value);
                scanf("%d", &item);
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->data = item;
                newnode->next = ptr->next;
                ptr->next = newnode;
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
                printf("Elements in linked list\n");
                while (ptr!= NULL)
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
