#include <iostream>
using namespace std;

// Function that takes an array, adds the elements of the array, and returns an integer

int sum(int[]);

main(){
    
	int array[3];
	int x, i;
	
	for(i=0; i < 3; i++){
		cout << i+1 << "/3 " << "Give me an element: ";
		cin >> array[i];
	}
	
	x=sum(array);
	cout << "The function returned: " << x;
	
}

int sum(int arr[])
{
	int s=0;
	int i;
	for(i=0; i < 3; i++)
	{
		s = s + arr[i];
	}
	return(s);
}

    
