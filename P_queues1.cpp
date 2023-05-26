#include <iostream>
#define MAX 100 // Maximum size of the queue

using namespace std;

struct queue {
    int elements[MAX];
    int front;
    int rear;
};

// Functions to use
void insert(struct queue *pq, int x);
void remove(struct queue *pq);
void print(struct queue *pq);

int main() {
    int option, value;
    struct queue q;
    q.front = -1; // Initialize empty queue
    q.rear = -1;

    do {
        // Display menu options
        cout << "\t -----MENU----- \n";
        cout << "1. Insert\n";
        cout << "2. Remove\n";
        cout << "3. Print\n";
        cout << "4. Exit\n";
        cout << "Enter option: ";
        cin >> option;

        // Evaluate selected option
        switch (option) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> value;
                insert(&q, value);
                break;
            case 2:
                remove(&q);
                break;
            case 3:
                print(&q);
                break;
            case 4:
                cout << "Bye!\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (option != 4);

    return 0;
}

void insert(struct queue *pq, int x) {
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

void remove(struct queue *pq) {
    // Check if queue is empty
    if (pq->front == -1) {
        cout << "Error: queue empty.\n";
        return;
    }

    // Remove element
    int removed = pq->elements[pq->front];
    pq->front++;

    // If we removed the last element, reset queue
    if (pq->front > pq->rear) {
        pq->front = -1;
        pq->rear = -1;
    }

    cout << "Removed element: " << removed << endl;
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

