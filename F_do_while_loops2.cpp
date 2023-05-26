#include <iostream>  
using namespace std;
int main() { //Nested do while loops
	int a = 1;
	do {
		int b = 1;
		do {
			cout << a << "\n";
			b++;
		} while (b <= 3);
		a++;
	} while (a <= 3);
	return 0;
}
