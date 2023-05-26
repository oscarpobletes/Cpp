#include <iostream>
#include <cmath>
using namespace std;

int power(int x, int y){
	return pow(x,y);
}

main(){
	int x,y,res;
	cout << "\t----- POW -----\n";
	cout << "Give me x: ";
	cin >> x;
	cout << "Give me y: ";
	cin>> y;
	res=power(x,y);
	cout << x << "^" << y << " is " <<res;
}
