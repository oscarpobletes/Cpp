#include <iostream>
using namespace std;

int main(){
	int opt;
	double x,y;
	cout << "\t-----BASIC CALCULATOR 2.0\n";
	cout << "1. Sum\n2. Sub\n3. Mult\n4. Div\n";
		cout << "Select an option:";
	cin >> opt;
	
	switch(opt){
		case 1:
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << x <<" + "<<y <<" = "<< x+y;	
			break;
		case 2:
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << x <<" - "<<y <<" = "<< x-y;	
			break;	
		case 3:
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << x <<" * "<<y <<" = "<< x*y;	
			break;
			
		case 4:
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << x <<" / "<<y <<" = "<< x/y;	
			break;
		default:
		cout << "Invalid option ";
			break;
	}
	
	return 0;
}
