#include <iostream>
using namespace std;
void target_sum(int array[], int n, int key)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == key)
            {
                ans++;
            }
        }
    }
    cout << "target sum: " << ans;
}
int main()
{
    int array[] = {1, 3, 2, 4, 1};
    int key = 5;
    int size = 5;
    target_sum(array, size, key);
}

// target sum: 3