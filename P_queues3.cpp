#include <iostream>
#define MAX 10 // Maximum size of the queue

using namespace std;

struct queue {
    int elements[MAX];
    int front;
    int rear;
};

// Functions to use
void insert_even(struct queue *pq, int x);
void insert_odd(struct queue *pq, int x);
void print(struct queue *pq);

int main() {
    int value;
    struct queue even, odd;
    even.front = -1; // Initialize empty queue
    even.rear = -1;
    odd.front = -1;
    odd.rear = -1;

    // Get 10 integer values from user
    for (int i = 0; i < 10; i++) {
        cout << "Enter integer value #" << i+1 << ": ";
        cin >> value;
        if (value % 2 == 0) {
            insert_even(&even, value);
        } else {
            insert_odd(&odd, value);
        }
    }

    int option;
    do {
        // Display menu options
        cout << "\t -----MENU----- \n";
        cout << "1. Print even queue\n";
        cout << "2. Print odd queue\n";
        cout << "3. Exit\n";
        cout << "Enter option: ";
        cin >> option;

        // Evaluate selected option
        switch (option) {
            case 1:
                print(&even);
                break;
            case 2:
                print(&odd);
                break;
            case 3:
                cout << "Bye!\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (option != 3);

    return 0;
}

void insert_even(struct queue *pq, int x) {
    // Check if queue is full
    if (pq->rear == MAX-1) {
        cout << "Error: queue full.\n";
        return;
    }

    // Insert element
    pq->rear++;
    pq->elements[pq->rear] = x;

    // If it's the first element, update front
    if (pq->front == -1) {
        pq->front = 0;
    }
}

void insert_odd(struct queue *pq, int x) {
    // Check if queue is full
    if (pq->rear == MAX-1) {
        cout << "Error: queue full.\n";
        return;
    }

    // Insert element
    pq->rear++;
    pq->elements[pq->rear] = x;

    // If it's the first element, update front
    if (pq->front == -1) {
        pq->front = 0;
    }
}

void print(struct queue *pq) {
    // Check if queue has elements
    if (pq->front == -1) {
        cout << "Queue is empty.\n";
        return;
    }

    // Print queue
    cout << "Elements of the queue: ";
    for (int i = pq->front; i <= pq->rear; i++) {
        cout << pq->elements[i] << " ";
    }
    cout << endl;
}

