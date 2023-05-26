#include <iostream>
using namespace std;

int main(){
	struct data{
		int account;
		float amount;
	};

struct data rec; // rec uses the data struct
struct data *q; //the q pointer points to something like struct data
q=&rec; //initialize the q pointer in the rec struct
q->account=12;
q->amount=23917.33;

cout << q->account << endl;
cout << (*q).amount;


}

