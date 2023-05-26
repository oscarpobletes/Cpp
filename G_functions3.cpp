#include <iostream>
using namespace std;

//Function prototypes
float sum(float, float);
float sub(float, float);
float mult(float, float);
float div(float, float);
int   mod(int, int);

main(){
	cout << "SELECT AN OPTION: \n 1. Sub \n 2. Sum \n 3. Mult \n 4. Div \n 5. Mod\n Option: ";
    cin >> opt;
    switch(opt){
		case 1:
	     	sum();
			break;
		case 2:
			sub();
			break;	
		case 3:

			break;
			
		case 4:
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << x <<" / "<<y <<" = "<< x/y;	
			break;
		default:
		cout << "Invalid option: ";
			break;
	}
}

float sum(float x, float y){
	float x;
	float y;	
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << x <<" + "<<y <<" = "<< x+y;	
	
}
float sub(float x, float y){
	float x;
	float y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << x <<" - "<<y <<" = "<< x-y;	
}
float mult(float x, float y){
	float x;
	float y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << x <<" * "<<y <<" = "<< x*y;	
}
float div(float x, float y){
	float x;
	float y;
	
}
int   mod(int x, int y){
	int x;
	int y;

	
	
}


