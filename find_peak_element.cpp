#include <iostream>
using namespace std;

int peak_element(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] < array[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int array[4] = {0, 10, 5, 2};
    cout <<"Output: "<< peak_element(array, 4);
}

//Output:  1