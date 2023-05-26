#include <iostream>
using namespace std;

// Definition of the tree node structure
struct treeNode
{
    int data;
    treeNode* left;
    treeNode* right;
};

// Function to create a new node in the tree
treeNode* createNode(int data)
{
    treeNode* newNode = new treeNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the tree
treeNode* insertNode(treeNode* root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    else if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to print the tree in order
void printTree(treeNode* root)
{
    if (root != NULL)
    {
        printTree(root->left);
        cout << root->data << "\n";
        printTree(root->right);
    }
}

// Main function
int main()
{
    treeNode* root = NULL;

    // Insert some nodes into the tree
    root = insertNode(root, 1);
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    root = insertNode(root, 10);
    root = insertNode(root, 6);
    root = insertNode(root, 14);
    root = insertNode(root, 4);
    root = insertNode(root, 7);
    root = insertNode(root, 13);
    
    // Print the tree in order
    printTree(root);
    
    return 0;
}


