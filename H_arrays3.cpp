#include <iostream>
using namespace std;
/* Create a program that passes a 5-element float array to a function called avg to store grades
and in the function get the average of the grades and return the average it got.*/
float avg(float grades[]) {
    float sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += grades[i];
    }
    return sum / 5;
}

int main() {
    float grades[5];
    for(int i = 0; i < 5; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
    }
    cout << "The average is: " << avg(grades) << endl;
    return 0;
}