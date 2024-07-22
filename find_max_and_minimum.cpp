#include <iostream>
using namespace std;

// Function to find the maximum value in an array
int maximum(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Function to find the minimum value in an array
int minimum(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;

    int arr[100];  // Assuming maximum size is 100
    int i = 0;
    while (i < size) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        i += 1;
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max_val = maximum(arr, size);
    int min_val = minimum(arr, size);

    cout << "Maximum value in the array: " << max_val << endl;
    cout << "Minimum value in the array: " << min_val << endl;

    return 0;
}
