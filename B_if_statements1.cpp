#include <iostream>
using namespace std;

int main(){
	int x,y; //only integers
	cout << "Give me x: ";
	cin >> 	x;
	cout << "Give me y: ";
	cin >> 	y;
	
	if(x>y){
		cout << "x is greater than y";
	}else if (y>x){
		cout << "y is greater than x" ;
	}else{
		cout << "x is equal to y";
	}
	return 0;
}
