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

// Function to find the siblings of a given node in the tree
bool hasSiblings(treeNode* root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->left == NULL && root->right == NULL)
    {
        return false;
    }
    // Check if the left child of the root is the node we are looking for and the right child is not null
    else if (root->left != NULL && root->left->data == data && root->right != NULL)
    {
        cout << "The right sibling of the given node is: " << root->right->data << endl;
        return true;
    }
    // Check if the right child of the root is the node we are looking for and the left child is not null
    else if (root->right != NULL && root->right->data == data && root->left != NULL)
    {
        cout << "The left sibling of the given node is: " << root->left->data << endl;
        return true;
    }
    else
    {
    // If the node is not found in the root, recursively search the left and right subtrees of the root
    // to see if the node has any siblings
        return hasSiblings(root->left, data) || hasSiblings(root->right, data);
    }
}


// Function to find the relatives of a given node in the tree
void findRelatives(treeNode* root, int data){
    treeNode* predecessor = findPredecessor(root, data);
    if (predecessor == NULL)
    {
        cout << "There is no predecessor for the given node.\n";
    }
    else
    {
        cout << "The predecessor of the given node is: " << predecessor->data << endl;
    }

    treeNode* successor = findSuccessor(root, data);
    if (successor == NULL)
    {
        cout << "There is no successor for the given node.\n";
    }
    else
    {
        cout << "The successor of the given node is: " << successor->data << endl;
    }

    if (hasSiblings(root, data))
    {
        //Prints siblings in the hasSiblings function
    }
    else
    {
        cout << "The given node does not have any siblings.\n";
    }
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
        cout << "\n\t-----MENU-----\n";
        cout << "1. Insert\n2. Print in order\n3. Find relatives\n4. Exit\n";
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
       			 cout << "Enter value to find relatives: ";
       			 cin >> num;
        		 findRelatives(root, num);
       			 break;
       			 
      		case 4:
          		  cout << "Bye bye!\n";
             break;

        	default:
          		  cout << "Invalid option.\n";
             break;
    }
} while(opt != 4);

return 0;
}

