#include <iostream>
using namespace std;

/* Declare and initialize an array with the following numbers: 
4, 78, 23, 15, 3, 8, 63, 12, 46, 31, 61, 35, 32, 90, 48, 74, 14, 89, 19, 22
Ask the user for a number and look for it in the array, if it is found, say in which position (index) of the array it was found.
If it was not found, display a message that says, number not found.
*/
int main() {
    int numbers[] = {4, 78, 23, 15, 3, 8, 63, 12, 46, 31, 61, 35, 32, 90, 48, 74, 14, 89, 19, 22};
    int userNum;
    bool found = false;
    cout << "Enter a number: ";   
    cin >> userNum;
    
    /* Note that the array has 20 elements, so the for loop will iterate from 0 to 19, that's why the condition is i < 20. */
    for (int i = 0; i < 20; i++) {
        if (numbers[i] == userNum) {
            cout << "The number " << userNum << " was found at position " << i+1 << " of the array" << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Number not found" << endl;
    }
    return 0;
}