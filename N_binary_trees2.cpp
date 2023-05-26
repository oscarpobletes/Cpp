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

// Main function
int main()
{
 treeNode* root = NULL;
 int opt;
 int num;

 do{
 cout << "\t-----MENU-----\n";
 cout << "1. Insert\n2. Print in order\n3. Exit\n";
 cout << "Option: ";
 cin >> opt;
 
 switch(opt){
 	case 1:
 		cout << "Please enter the number you want to insert: ";
 		cin >> num;
 		root = insertNode(root, num);
 		cout << "The number has been inserted.\n";
 		break;
 		
 	case 2:
 		 printInOrder(root);
 		 break;
 	
 	case 3:
 		cout <<"Bye bye!";
 		break;
 }	
 }while(opt!=3);
    
    return 0;
}
