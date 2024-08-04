#include <iostream>
#include <climits>
using namespace std;

void second_largest(int array[], int n)
{
    int l = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= l)
        {
            l = array[i];
        }
    }
}
int main()
{
    int array[4] = {1, 4, 3, 5};
    second_largest(array, 4);
}