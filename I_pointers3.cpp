#include <iostream>
using namespace std;
/*This program is very simple and incorrect.
  This involves changing the object value of a variable using a function.  This cannot be done.  
  When this program runs it will display 140 on the screen.  
  The operations that will take place with the function have no effect 
  on the object value of the variable that was passed to the change() function.
*/
  
void change(int);

int main(){
	int x;
	x=140;
	change(x);
	cout << x;
}

void change(int x){
	x=351;
}
