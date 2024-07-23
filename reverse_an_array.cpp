#include <iostream>
using namespace std;

void reverse_and_print_array(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        ++left;
        --right;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size, arr[10];
    cout << "Size: ";
    cin >> size;
    cout << "Enter array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse_and_print_array(arr, size);
}

// Size: 4
// Enter array: 1 2 3 4
// 4 3 2 1 