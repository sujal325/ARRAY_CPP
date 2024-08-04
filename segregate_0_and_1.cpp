#include <iostream>
using namespace std;

void segregate(int array[], int n)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (array[start] == 0)
        {
            start++;
        }
        else
        {
            if (array[start] == 1 && array[end] == 0)
            {
                swap(array[start], array[end]);
            }
            else
            {
                end--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[] = {1, 0, 0, 1, 0, 0, 1, 1, 0};
    segregate(array, 9);
}

// 0 0 0 0 0 1 1 1 1 