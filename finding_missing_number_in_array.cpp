#include <iostream>
using namespace std;

void missing(int arr[], int size)
{
    int n = size + 1;
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << total - sum;
}
int main()
{
    int size, arr[10];
    cout << "Size of array: ";
    cin >> size;
    cout << "Enter array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    missing(arr, size);
}

// Size of array: 4
// Enter array: 1 3 4 5
// 2