#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    bool hayPares = false;

    vector<int> array(num);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    for (int numeros : array)
    {
        if (numeros % 2 == 0)
        {
            cout << "[" << numeros << "]";
            hayPares = true;
        }
    }

    if (!hayPares)
    {
        cout << ":(";
    }

    return 0;
}