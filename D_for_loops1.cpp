#include <iostream>
using namespace std;

int main(){
	int i;
	int num;
	int sum=0;
	cout << "Hey there!\nI will ask you for five numbers and then I will add the even ones\n";
	for (i=0;i<5;i++){
		cout << i+1 << "/5" << " Number: " ;
		cin >> num; 
		if(num%2==0){
			sum=sum+num;
		}
	}
	cout << "The sum of the even numbers is: " << sum;
	
	return 0;
}
