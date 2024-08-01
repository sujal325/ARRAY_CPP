#include <iostream>
using namespace std;

int binarysearch(int array[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int key;
    int array[6] = {1, 2, 3, 4, 5, 6};
    cout << "key: ";
    cin >> key;
    int result = binarysearch(array, 6, key);
    cout << "result is: " << result;
}