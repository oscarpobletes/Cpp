#include <iostream>
#include <string>

using namespace std;

// Animal class
class Animal {
private:
    string name;
    int age;
    string species;

public:
    // Constructor
    Animal(const string& animalName, int animalAge, const string& animalSpecies)
        : name(animalName), age(animalAge), species(animalSpecies) {}

    // Member function to display animal information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Species: " << species << endl;
    }
};

int main() {
    // Create an Animal object
    Animal lion("Simba", 5, "Lion");

    // Call the displayInfo() member function to display animal information
    lion.displayInfo();

    return 0;
}



