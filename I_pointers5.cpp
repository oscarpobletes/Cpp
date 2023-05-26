#include <iostream>
using namespace std;
//Another way to change a variable value through a function.
void change(int*);

int main(){
	int x;
	int *p;
	p=&x;
	x=146;
	change(p);
	cout << x;
}

void change(int *ptr){
	*ptr=351;
}
