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
    int firstIndex = firstOccurance(array, 7, key);
    int lastIndex = lastOccurance(array, 7, key);
    int total = lastIndex - firstIndex + 1;
    cout << "Total occurance of element is: " << (total);
}

// key: 2
// Total occurance of element is: 5