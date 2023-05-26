#include <iostream>
using namespace std;
void pointer()
{
    int var = 7;
  
    // Declare the pointer variable
    int* ptr;
  
    // The data type of ptr and var must be same
    // Assign the address of a variable to a pointer
    ptr = &var;
  
    // Print
    cout << "ptr = " << ptr << "\n";
    cout << "var = " << var << "\n";
    cout << "*ptr = " << *ptr << "\n";
}

int main() 
{ 
  pointer(); 
  return 0;
}
