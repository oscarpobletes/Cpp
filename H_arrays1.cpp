#include <iostream>
using namespace std;

// Ask the user for 7 integers and store them in an array that will display after.

main(){
    
	int array[7];
	int x, i;
	
	for(i=0; i < 7; i++){
		cout << i+1 << "/7 " << "Give me a number: ";
		cin >> array[i];
	}
	
   cout << "The integers you entered are: ";
    for (int i = 0; i < 7; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
	



    
