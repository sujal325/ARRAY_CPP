#include <iostream>
using namespace std;

void printarray(int a[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int b[3] = {2, 3, 5};
    printarray(b, 3);
}
