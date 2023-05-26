#include <iostream>
using namespace std;

struct stack{
  int top;
  char elements[100];
};

// Add an item to the top of the stack
void push(stack &s, char item) {
  if(s.top < 99) {
    s.elements[++s.top] = item; // Update top (Add)
  }
  else {
    cout << "Stack overflow." << endl;
  }
}

// Remove the item at the top of the stack
void pop(stack &s, char &item) {
  if(s.top >= 0) {
    item = s.elements[s.top--]; // Update top (Remove)
  }
  else {
    cout << "Stack underflow.";
  }
}

// Return the item at the top of the stack
char top(stack s) {
  if(s.top >= 0) {
    return s.elements[s.top];
  }
  else {
    return '\0';
  }
}

// Check if the given expression is balanced
bool isBalanced(string exp) {
  stack s;
  s.top = -1;

  for(int i = 0; i < exp.length(); i++) {
    if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
      push(s, exp[i]); // Push opening brackets to the stack
    }
    else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
      char topChar = top(s); // Get the top character of the stack
      if((exp[i] == ')' && topChar == '(') || (exp[i] == '}' && topChar == '{') || (exp[i] == ']' && topChar == '[')) {
        char item;
        pop(s, item); // Pop the corresponding opening bracket from the stack
      }
      else {
        return false; // The expression is not balanced if the brackets do not match
      }
    }
  }

  return s.top == -1; // The expression is balanced if the stack is empty at the end
}

int main() {
  string exp;
  
  cout << "Enter an expression: ";
  getline(cin, exp); // Change the line cin >> s; to getline(cin, exp); to read the input as a complete line.
  
  if(isBalanced(exp)) {
    cout << "The expression is balanced." << endl;
  }
  else {
    cout << "The expression is not balanced." << endl;
  }
 
  return 0;
}

