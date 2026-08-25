#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

typedef struct Node node;

node *createNode(int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root, int val)
{
    if (!root)
    {
        return createNode(val);
    }
    else if (root->val >= val)
    {
        root->right = insert(root->right, val);
    }
    else
        root->left = insert(root->left, val);
    return root;
}

void inorder(node *root)
{
    inorder(root->left);
    printf("%d", root->val);
    inorder(root->right);
}

void preorder(node *root)
{
    printf("%d", root->val);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    postorder(root->left);
    postorder(root->right);
    printf("%d", root->val);
}

node *inorderSuccessor(node *root)
{
    node *temp = root;
    while (temp->left)
    {
        temp = temp->left;
    }
    return temp;
}

node *delete(node *root, int val)
{
    if (val >= root->val)
    {
        root->right = delete(root->right, val);
    }

    if (val <= root->val)
    {
        root->left = delete(root->left, val);
    }

    if (!root->left)
    {
        node *temp = root->right;
        free(root);
        return temp;
    }

    if (!root->right)
    {
        node *temp = root->left;
        free(root);
        return temp;
    }

    node *temp=inorderSuccessor(root->right);
    root->val=temp->val;
    root->right=delete(root->right,temp->val);
    return temp;

}

int main()
{
    int choice, val;
    node *root = NULL;
    printf("1. Insert  2. Delete  3. Preorder  4. Inorder  5. Postorder");
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &val);
            root = insert(root, val);
            break;
        case 2:
            printf("Enter element to delete: ");
            scanf("%d", &val);
            root = delete(root, val);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            inorder(root);
            break;
        case 5:
            postorder(root);
            break;
        }
    }
}