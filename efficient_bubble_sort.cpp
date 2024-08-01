#include <iostream>
using namespace std;

void bubble_sort(int array[], int size)
{
    bool swapped;
    for (int i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int array[7] = {1, 3, 5, 2, 6, 7, 4};
    bubble_sort(array, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

// sorted list is 1 2 3 4 5 6 7