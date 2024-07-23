#include <iostream>
using namespace std;

int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    return max;
}

int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int size, arr[10];
    cout << "Size of array: ";
    cin >> size;
    cout << "Type array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int return_value1 = max(arr, size);
    int return_value2 = min(arr, size);
    cout << "Biggest: " << return_value1 << endl;
    cout << "Smallest: " << return_value2;
}

// Size of array: 4
// Type array: 4 3 6 7
// Biggest: 7
// Smallest: 3