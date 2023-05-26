#include <iostream>
using namespace std; 
// Define a Node structure for the linked list
struct Node {
    float data;
    Node* next;
};

// Function to insert a node at the beginning of a linked list
void insert(Node** head, float data) {
    Node* newNode = new Node;  // Allocate memory for the new node
    newNode->data = data;      // Set the data of the new node
    newNode->next = (*head);   // Set the next pointer of the new node to point to the current head
    (*head) = newNode;         // Set the head to point to the new node
}

// Function to delete the first node of a linked list and return its data
float deleteNode(Node** head) {
    if (*head == nullptr) {    // Check if the list is empty
        return -1;
    }
    Node* temp = (*head);      // Save a pointer to the first node
    (*head) = (*head)->next;   // Set the head to point to the second node (or nullptr if there is only one node)
    float data = temp->data;   // Get the data from the first node
    delete temp;               // Free the memory used by the first node
    return data;               // Return the data from the first node
}

// Function to find the maximum value in an integer array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to perform radix sort on an array of floats
void radixSort(float arr[], int n) {
    // Find the maximum value in the array (as an integer)
    int max = (int)(arr[0] * 100);
    for (int i = 1; i < n; i++) {
        int num = (int)(arr[i] * 100);
        if (num > max) {
            max = num;
        }
    }
    // Create an array of 10 linked lists (buckets)
    Node* bucket[10];
    for (int i = 0; i < 10; i++) {
        bucket[i] = nullptr;   // Initialize each bucket to be empty
    }
    // Perform the counting sort for each decimal place (units, tenths, hundredths, etc.)
    for (int exp = 1; max/exp > 0; exp *= 10) {
        // Put each element into the appropriate bucket based on its current digit
        for (int i = 0; i < n; i++) {
            int digit = ((int)(arr[i] * 100) / exp) % 10;
            insert(&bucket[digit], arr[i]);
        }
        // Empty the buckets in order and place the elements back into the original array
        int i = 0;
        for (int j = 0; j < 10; j++) {
            while (bucket[j] != nullptr) {
                arr[i] = deleteNode(&bucket[j]);
                i++;
            }
        }
    }
}

int main() {
    // Define an array of floats to be sorted
    float arr[] = {423.75, 86.29, 21.46, 674.12, 998.99, 3.14, 763.5, 452.64, 309.23, 201.83};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Perform radix sort on the array
    radixSort(arr, n);
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
