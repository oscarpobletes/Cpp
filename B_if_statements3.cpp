#include <iostream>
using namespace std;

int main(){
	int x,y,opt;
	cout << "\t------BASIC CALCULATOR------\n";
	cout << "Give me x: ";
	cin >> x;
	cout << "Give me y: ";
	cin >> y;
    cout << "SELECT AN OPTION: \n 1. Sub \n 2. Sum \n 3. Mult \n 4. Div \n 5. Mod\n Option: ";
    cin >> opt;
    
    if (opt==1){
    	cout << " x - y = " << x-y;
	}else if (opt==2){
		cout << " x + y = " << x+y;
	}else if (opt==3){
		cout << " x * y = " << x*y;
	}else if (opt==4){
		cout << " x / y = " << x/y;
	}else if (opt==5){
		cout << " x / y = " << x%y;	
	}else{
		cout << " Invalid option";
	}

	return 0;
}
