#include <iostream>
using namespace std;

int main(){
	double salary;
	int age;
	cout << "\t-----CARD ASSIGNMENT-----\n";
	cout << "Enter salary: ";
	cin >> salary;
	cout << "Enter age: ";
	cin >> age;
	
	if (salary >= 10000 && age > 30){
		
		if (age>30){
			cout << "You can have the GOLD Card!";
		}else if (age>=25 && age <=30){
			cout << "You can have the PLATINUM Card!";
			
	}else{
		cout << "Sorry, there is no card for you...";
	}
	
	}
	return 0;
}
