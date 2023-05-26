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
    treeNode* newNode= new(treeNode);
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
void printInOrder(treeNode* root)
{
if(root->left != NULL)

printInOrder(root->left);

 cout << root->data << "\n";

if(root->right != NULL)

printInOrder(root->right);
}

// Function to find the predecessor of a given node in the tree
treeNode* findPredecessor(treeNode* root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    treeNode* predecessor = NULL;
    while (root != NULL)
    {
        if (root->data < data)
        {
            predecessor = root;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return predecessor;
}

// Function to find the successor of a given node in the tree
treeNode* findSuccessor(treeNode* root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    treeNode* successor = NULL;
    while (root != NULL)
    {
        if (root->data > data)
        {
            successor = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return successor;
}


int main()
{
    treeNode* root = NULL;
    treeNode* predecessor = NULL;
    treeNode* successor = NULL;
    int opt;
    int num;

    do
    {
        cout << "\t-----MENU-----\n";
        cout << "1. Insert\n2. Print in order\n3. Find predecessor\n4. Find successor\n5. Exit\n";
        cout << "Option: ";
        cin >> opt;

        switch(opt)
        {
            case 1:
                cout << "Please enter the number you want to insert: ";
                cin >> num;
                root = insertNode(root, num);
                cout << "The number has been inserted.\n";
                break;

            case 2:
            	if(root==NULL){
            	cout << "The tree is empty.\n ";
				}else{
                cout << "The tree in order is:\n";
                printInOrder(root);
                cout << endl;
				}
                break;

            case 3:
                cout << "Please enter the number you want to find the predecessor for: ";
                cin >> num;
                predecessor = findPredecessor(root, num);
                if (predecessor == NULL)
                {
                    cout << "There is no predecessor for the given node.\n";
                }
                else
                {
                    cout << "The predecessor of the given node is: " << predecessor->data << endl;
                }
                break;

            case 4:
                cout << "Please enter the number you want to find the successor for:";
            cin >> num;
            successor = findSuccessor(root, num);
            if (successor == NULL)
            {
                cout << "There is no successor for the given node.\n";
            }
            else
            {
                cout << "The successor of the given node is: " << successor->data << endl;
            }
            break;

        case 5:
            cout << "Bye bye!\n";
            break;

        default:
            cout << "Invalid option.\n";
            break;
    }
} while(opt != 5);

return 0;
}

