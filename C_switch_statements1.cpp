#include <iostream>
using namespace std;

int main(){
	int score;
	float avg;
	cout << "\t-----EXAM RESULTS-----\n";
	cout << "Enter your score: ";
	cin >> score;
	cout << "Enter your average: ";
	cin >> avg;
	
	switch (score){
		case 100:
			if (avg>=8){
				cout << "You are entitled to a 70% scholarship";
			}else if (avg<8){
				cout << "You are entitled to a 60% scholarship";
			}else{
				"Invalid average";
			}
			break;
		case 200:
			if (avg>=9){
				cout << "You are entitled to a 90% scholarship";
			}else if (avg<9){
				cout << "You are entitled to a 80% scholarship";
			}else{
				"Invalid average";
			}
			break;
	    case 300:
			if (avg==10){
				cout << "You are entitled to a 100% scholarship";
			}else{
				"Invalid average";
			}
			break;
		default:
			cout << "Invalid score";
			break;
	}	
	return 0;
}
