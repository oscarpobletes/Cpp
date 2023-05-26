#include <iostream>
using namespace std;

int main (){
	int x=10;
	int y=2;
	cout << "Preincrement: " << x + ++y << "\n"; //13
	y=2; //Reset to original value
	cout << "Postincrement: " << x + y++ << "\n"; //12
	cout << "Final value: " << x + y; //13
	return 0;
}
