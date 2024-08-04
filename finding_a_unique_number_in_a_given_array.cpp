#include <iostream>
using namespace std;

void array_manupulation(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            cout << array[i];
        }
    }
}
int main()
{
    int array[] = {1, 4, 1, 2, 2};
    array_manupulation(array, 5);
}

// 4