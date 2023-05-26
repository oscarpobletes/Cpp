#include <iostream>
using namespace std;
//This is one way to change the value of a variable through a function.
void change(int*);

int main(){
	int x;
	x=146;
	change(&x);
	cout << x;
}

void change(int *ptr){
	*ptr=351;	
}
