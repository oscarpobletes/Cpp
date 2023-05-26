#include <iostream>
using namespace std;

int *sum( int *, int *);

int main(){
 int a,b,*p;
 a=3;
 b=4;
 p=sum(&a,&b);
 cout << "\nSum= " << *p;
}

//Function that returns a pointer
int *sum(int *x, int *y){
	int *res,r;
	res=&r;
	*res= *x + *y; //r
	cout << "Result= " << *res;
	return(res);
}

