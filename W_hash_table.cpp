#include <iostream>
#include <unordered_map>

using namespace std;  // Avoids using std:: for each line

int main() {
    unordered_map<int, string> hashTable;  // Create an empty hash table

    // Insert key-value pairs into the hash table
    hashTable[1] = "Apple";
    hashTable[2] = "Banana";
    hashTable[3] = "Orange";

    // Access and print the values using keys
    cout << "Value at key 1: " << hashTable[1] << endl;
    cout << "Value at key 2: " << hashTable[2] << endl;
    cout << "Value at key 3: " << hashTable[3] << endl;

    // Check if a key exists in the hash table
    int key = 2;
    if (hashTable.count(key) > 0) {
        cout << "Key " << key << " exists." << endl;
    } else {
        cout << "Key " << key << " does not exist." << endl;
    }

    // Remove a key-value pair from the hash table
    hashTable.erase(2);

    // Check if the key still exists after removal
    if (hashTable.count(key) > 0) {
        cout << "Key " << key << " still exists." << endl;
    } else {
        cout << "Key " << key << " does not exist anymore." << endl;
    }

    return 0;
}

