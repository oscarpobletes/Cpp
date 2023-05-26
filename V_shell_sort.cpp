#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    // Start with a large gap and reduce it in each iteration
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform insertion sort on elements at gap intervals
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            // Shift elements until the correct position for temp is found
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = {20, 77, 25, 12, 7, 11, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shellSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

