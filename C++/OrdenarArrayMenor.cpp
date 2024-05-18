#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    sort(array, array + 10);

    for (int numeros : array)
    {
        cout << numeros << " ";
    }

    return 0;
}