#include <iostream>
using namespace std;

int main(){
	float a,b,*ptr1,*ptr2,mult;
	a=10;
	b=5;
	ptr1=&a;
	ptr2=&b;
	mult=*ptr1 * *ptr2;
	cout << "a address= " << ptr1 << "\n";
	cout << "b address= " << ptr2 << "\n";
	cout << "a= " << a << "\n";
	cout << "b= " << b << "\n";
	cout << "a*b= " << mult;
	return 0;
}
