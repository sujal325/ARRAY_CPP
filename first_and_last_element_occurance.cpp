#include <iostream>
using namespace std;

int firstOccurance(int array[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == array[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurance(int array[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == array[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int key;
    int array[7] = {1, 2, 2, 2, 2, 2, 4};
    cout << "key: ";
    cin >> key;
    cout << "first occurance of element is: " << firstOccurance(array, 7, key) << " lastoccurance of element is: " << lastOccurance(array, 7, key);
}

// key: 2
// first occurance of element is: 1 lastoccurance of element is: 5