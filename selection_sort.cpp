#include <iostream>
using namespace std;

void selection_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int next = i + 1; next < size; next++)
        {
            if (array[next] < array[min])
            {
                min = next;
            }
        }
        swap(array[min], array[i]);
    }
}

int main()
{
    int array[7] = {1, 3, 5, 2, 6, 7, 4};
    selection_sort(array, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}


// sorted list is 1 2 3 4 5 6 7