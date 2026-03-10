// Binary search tree(BST),Insert , Traverse
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    node *left;
    node *right;
};
node *createnode(int value)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
node *insert(node *root, int value)
{
    if (root == NULL)
    {
        return createnode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    else
    {
        printf("Duplicate number not allowed\n");
    }
    return root;
}
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main()
{
    node *root = NULL;
    int value, ch = 0;
    while (ch != 5)
    {
        printf("1-> Insert\n");
        printf("2-> Preorder\n");
        printf("3-> Inorder\n");
        printf("4-> Postorder\n");
        printf("5-> Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Value To Insert : ");
            scanf("%d", &value);
            root = insert(root, value);
            break;
        case 2:
            printf("\nPreorder traversal\n");
            preorder(root);
            break;
        case 3:
            printf("\nInorder Traversal\n");
            inorder(root);
            break;
        case 4:
            printf("\nPostorder traversal\n");
            postorder(root);
        case 5:
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
}