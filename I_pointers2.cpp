#include <iostream>
using namespace std;

int main(){
	int i, *p;
	i=49;
	cout << i << "\n";
	p=&i; //p is initialized at the address of i;
	*p=7;
	cout << i;
	return 0;
}
