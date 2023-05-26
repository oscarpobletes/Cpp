#include <iostream>
using namespace std;

struct employee{
	int id;
	float salary;
};

int main(){
	struct employee oscar;
	struct employee diego;
	oscar.id=426099;
	diego.id=404861;
	oscar.salary=1234.90;
	diego.salary=1000.01;
	
	cout << "Oscar\nID= " << oscar.id << "\nSalary= " << oscar.salary << endl;
	cout << "--------------------------------------" << endl;
	cout << "Diego\nID= " << diego.id << "\nSalary= " << diego.salary;
	
	return 0;
}


