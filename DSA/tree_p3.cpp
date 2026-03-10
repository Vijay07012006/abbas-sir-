
// Creation and traversal of tree
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
    node *root = createnode(10);
    root->left = createnode(20);
    root->right = createnode(30);
    root->left->left=createnode(40);
    root->left->right=createnode(50);
    root->right->left=createnode(60);
    root->right->right=createnode(70);

    printf("Preorder Traversal:\n");
    preorder(root);

    printf("\ninorder Traversal:\n");
    inorder(root);

    printf("\nPostorder Traversal:\n");
    postorder(root);
}