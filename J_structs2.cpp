#include <iostream>
using namespace std;

struct students{
	int id;
	float grades[3];
	float avg=0;
};

int main(){
	int i;
	struct students brian;
	struct students peter;
	brian.id=123;
	peter.id=456;

	cout << "Enter the 3 grades of Brian"<< endl;
	for(i=0;i<3;i++){
		cout << "Grade " << i+1 << ": ";
		cin >> brian.grades[i];
	}
	
	
	cout << "Now enter the 3 grades of Peter"<< endl;
	for(i=0;i<3;i++){
		cout << "Grade " << i+1 << ": ";
		cin >> peter.grades[i];
	}

    cout << "****************************" << endl;
	cout << "Brian results: " << endl;
	cout << "ID: " << brian.id << endl;
	cout << "Grades: ";
	for(i=0;i<3;i++){
		cout << brian.grades[i] << ",";
	    brian.avg= brian.avg + brian.grades[i]/3;
	}
	cout << "\nAverage: " << brian.avg << endl;
	
	cout << "****************************" << endl;
	cout << "Peter results: " << endl;
	cout << "ID: " << peter.id << endl;
	cout << "Grades: ";
	float pavg;
	for(i=0;i<3;i++){
		cout << peter.grades[i] << ",";
		peter.avg= peter.avg + peter.grades[i]/3;
	}
	cout << "\nAverage: " << peter.avg << endl;
}
