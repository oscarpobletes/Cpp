#include <iostream>
#include <stack>
#include <string>

/* Example of usage:
Enter a mathematical expression in postfix notation: 43*25/+
           +
         /   \
       *      /
      / \    / \
     4   3  2   5
     = 12    =0.4

First, the numbers 4 and 3 are multiplied, which gives a result of 12. 
Then, the number 2 is divided by 5, which gives a result of 0.4. 
Finally, the results of the multiplication and division are added, which gives a result of 12.4.
It is worth noting that to perform this operation, it is necessary to follow the rules of postfix notation,
in which operators come after operands.*/

using namespace std;

// Definition of the node structure of the tree
struct Node {
    char data;
    Node* left;
    Node* right;
};

// Function to create a new node with a given data
Node* createNode(char data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Function to build the expression tree from a given postfix expression
Node* buildTree(string expression) {
    stack<Node*> stack; // A stack of nodes is used to build the tree

    // Each character of the expression is traversed
    for (int i = 0; i < expression.length(); i++) {
        char character = expression[i];

        // If the character is an operand, a new node is created and added to the stack
        if (isdigit(character)) {
            Node* node = createNode(character);
            stack.push(node);
        }
        // If the character is an operator, two new nodes are created from the last two nodes on the stack,
        // assigned as left and right children, respectively, and the new node is added to the stack
        else {
        //Handle the case when the expression is empty or has only one operand,
        //as it will lead to an error while evaluating the expression tree.
                if (stack.size() < 2) { // Check if there are at least two nodes on the stack
                cout << "Invalid expression" << endl;
                return nullptr;
            }
        Node* right = stack.top(); // The last node added to the stack is obtained, which will be the right child of the new node
        stack.pop(); // The node is removed from the stack
        Node* left = stack.top(); // The previous node on the stack is obtained, which will be the left child of the new node
        stack.pop(); // The node is removed from the stack

        Node* node = createNode(character); // A new node is created with the operator as data
        node->left = left; // The left node is assigned as the left child of the new node
        node->right = right; // The right node is assigned as the right child of the new node
        stack.push(node); // The new node is added to the stack
        }
    }

    // At the end, the only node in the stack will be the root of the tree
    return stack.top();
}

// Function to evaluate the expression from the expression tree
double evaluateTree(Node* root) {
    // If the root is an operand, its value is returned
    if (isdigit(root->data)) {
        return root->data - '0';  // The value of the operand is converted from char to int and returned
        // For example, the character '0' has a numeric value of 48, the character '1' has a numeric value of 49, 
        // and so on up to the character '9', which has a numeric value of 57.
    }
    // If the root is an operator, its left and right children are recursively evaluated,
    // perform the corresponding operation and return the result
    else {
    double left = evaluateTree(root->left);  // Evaluate the left subtree
    double right = evaluateTree(root->right);  // Evaluate the right subtree
    switch (root->data) {  // Evaluate the operator at the root
        case '+':
            return left + right;  // Return the sum of the values of the left and right subtrees
        break;
        case '-':
            return left - right;  // Return the difference of the values of the left and right subtrees
        break;
        case '*':
            return left * right;  // Return the product of the values of the left and right subtrees
        break;
        case '/':
            return left / right;  // Return the quotient of the values of the left and right subtrees
        break;
        default:
        return 0.0;  // If the operator is not valid, return 0.0
        break;
        }
    }
}

int main() {
    string expression;
    cout << "Enter a mathematical expression in postfix notation: ";
    getline(cin, expression);
    
    // Validation of the expression
    for (int i = 0; i < expression.length(); i++) {
        char character = expression[i];
        if (!(isdigit(character) || character == '+' || character == '-' || character == '*' || character == '/')) {
            cout << "Invalid expression" << endl;
            return 0;
        }
    }

    // Build expression tree from postfix expression
    Node* root = buildTree(expression);

    // Evaluate the expression from the expression tree
    double result = evaluateTree(root);

    cout << "The result is: " << result << endl;

    return 0;
}

