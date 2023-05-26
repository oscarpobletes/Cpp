#include <iostream>
using namespace std;
int main()
{
	/*The While loop is an entry control loop because firstly, the condition is checked, then the loop's body is executed. 
	The do-while loop is an exit control loop because firstly. the body of the loop is executed then the condition is checked true or false.*/
	int num, sum = 0;
	cout << "\t-----SUM-----\n";
	do {
		cout << "Enter a number or press 0 to exit and calculate sum:  ";

		cin >> num;

		sum += num;

	} while (num != 0);
	cout << "Sum is " << sum;

	return 0;
}
