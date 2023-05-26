#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void storeInList(int num, Node*& list) {
    Node* newNode = new Node;
    newNode->value = num;
    newNode->next = NULL;

    // Check if the list is empty
    if (list == NULL) {
        list = newNode;
    } else {
        // Go through the list to find the last node
        Node* curr = list;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        // Add the new node to the end of the list
        curr->next = newNode;
    }
}

void printList(Node* list) {
    if (list == NULL) {
        cout << "Empty list";
    } else {
        Node* curr = list;
        while (curr != NULL) {
            cout << curr->value << " ";
            curr = curr->next;
        }
    }
}

int main() {
    int numbers[10] = {5, 8, 7, 12, 3, 6, 9, 10, 11, 2};
    Node* evenList = NULL;
    Node* oddList = NULL;

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            storeInList(numbers[i], evenList);
        } else {
            storeInList(numbers[i], oddList);
        }
    }

    char option;
    cout << "Enter 'e' to print the even list or 'o' to print the odd list: ";
    cin >> option;

    if (option == 'e') {
        cout << "Even list: ";
        printList(evenList);
    } else if (option == 'o') {
        cout << "Odd list: ";
        printList(oddList);
    } else {
        cout << "Invalid option";
    }

    return 0;
}
