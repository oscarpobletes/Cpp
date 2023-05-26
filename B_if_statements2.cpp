#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cout << "Give me x: ";
	cin >> x;
	cout << "Give me y: ";
	cin >> y;
	cout << "Give me z: ";
	cin >> z;
	
    if (x>y && x>z){
    	cout << "x is greater than y and z";
	}else if (y>x && y>z){
		cout << "y is greater than x and z";
	}else if (z>x && z>y){
		cout << "z is greater than x and y";
	}else{
		cout << "x, y and z are equal";
	}
	
	return 0;
}
