#include <iostream>
using namespace std;

void insertion_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (array[j] < array[j - 1])
            {
                swap(array[j], array[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
}
int main()
{
    int array[6] = {5, 6, 3, 2, 0, 1};
    insertion_sort(array, 6);
}

// 012356