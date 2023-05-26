#include <iostream>
using namespace std;

int main(){
	int i;
	while(i<=1798){
		if (i%5==0){
			i=i+2;
		}else{
			i=i+3;
		}
		cout << i << "\n";
	}
	return 0;
}
/*
0 mod 5 = 0
i+2=2

2 mod 5 = 2
i+3= 5

5 mod 5 = 0
i+2= 7

7 mod 5= 2
i+3 = 10

...

*/
