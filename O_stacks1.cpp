#include <iostream>
using namespace std;

struct stack{
  int top;
  int elements[10];
};

void push(stack &s, int item) {
  if(s.top < 9) {
    s.elements[++s.top] = item; //Update top (Add)
    cout << "Pushed!";
    cout << endl;
  }
  else {
    cout << "Stack overflow." << endl;
  }
}

void pop(stack &s, int &item) {
  if(s.top >= 0) {
    item = s.elements[s.top--]; //Update top (Remove)
    cout << "Popped!";
    cout << endl;
  }
  else {
    cout << "Stack underflow.";
  }
}

void top_info(stack s) {
  cout << "Top position: " << s.top;
  if(s.top >= 0) {
    cout << "\nTop element: " << s.elements[s.top] << endl;
  }
  else {
    cout << "\nStack is empty." << endl;
  }
}


int main() {
  stack s;
  s.top = -1;
  int i=0;
  char opt;
  
  cout << "\t-----STACK-----";
  do {
    cout << "\na) Push\nb) Pop\nc) Print\nd) Top\ne) Exit\n";
    cout << "Option: ";
    cin >> opt;
    
    switch(opt) {
      case 'a':
        cout << "Please enter the number to push: ";
        cin >> i;
        push(s,i);
        break;
       
      case 'b':
        pop(s,i);
        break;
       
      case 'c':
        if(s.top<0){
        cout<< "The stack is empty";
        }else{
        cout << "Stack contents: ";
        for(int j = 0; j <= s.top; j++) {
          cout << s.elements[j] << " ";
        }
        }
        cout << endl;
        break;
        
      case 'd':
       top_info(s);
       cout << endl;
       break;
       
      case 'e':
        cout << "Bye!";
        break;
       
      default:
        cout << "Invalid option." << endl;
        break;
    }
    
  } while(opt != 'e');
 
  return 0;
}
