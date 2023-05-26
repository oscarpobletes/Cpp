#include <iostream>
using namespace std;

struct Record {
  int id;
  int age;
  double salary;
};

void displayData(Record *ptr1, Record *ptr2) {
   cout << "------------------------------" << endl;
  if (ptr1->salary > ptr2->salary) {
    cout << "Employee 1 earns more." << endl;
    cout << "------------------------------" << endl;
    cout << "Data of employee 1:" << endl;
    cout << "ID: " << ptr1->id << endl;
    cout << "Age: " << ptr1->age << endl;
    cout << "Salary: $" <<  ptr1->salary << endl;
  } else if (ptr1->salary < ptr2->salary) {
    cout << "Employee 2 earns more." << endl;
    cout << "------------------------------" << endl;
    cout << "Data of employee 2:" << endl;
    cout << "ID: " << ptr2->id << endl;
    cout << "Age: " << ptr2->age << endl;
    cout << "Salary: $" << ptr2->salary << endl;
  } else {
    cout << "Both employees earn the same." << endl;
    cout << "------------------------------" << endl;
  }
}

int main() {
  Record emp_1, emp_2;
  Record *ptr1 = &emp_1;
  Record *ptr2 = &emp_2;

  cout << "Enter data for employee 1:" << endl;
  cout << "ID: ";
  cin >> ptr1->id;
  cout << "Age: ";
  cin >> ptr1->age;
  cout << "Salary: $";
  cin >> ptr1->salary;
  cout << endl;

  cout << "Enter data for employee 2:" << endl;
  cout << "ID: ";
  cin >> ptr2->id;
  cout << "Age: ";
  cin >> ptr2->age;
  cout << "Salary: $";
  cin >> ptr2->salary;
  cout << endl;

  // Pass the structures to the function using pointers
  displayData(ptr1, ptr2);

  return 0;
}

