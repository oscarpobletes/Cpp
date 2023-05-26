#include <iostream>
using namespace std;

float avg(float num1, float num2){ //Writing function
	float res;
	res=num1+num2;
	res=res/2;
	return(res);
}

int main(){
	float x,y,average;
	x=10;
	y=20;
	average=avg(x,y); //Calling function
	cout << "The average is: " << average;
	return 0;
}
