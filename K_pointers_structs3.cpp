#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance *ptr, d; // A pointer variable ptr and normal variable d of type structure Distance is defined.
    // The address of variable d is stored to pointer variable, that is, ptr is pointing to variable d.
	// Then, the member function of variable d is accessed using pointer.
    ptr = &d;
    
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;
 
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}
