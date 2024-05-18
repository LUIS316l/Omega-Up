#include <iostream>

using namespace std;

int main()
{

    int num, op;
    cin >> num;
    int array[num];

    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }

    cin >> op;

    if (op == 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (array[i] % 2 == 0)
            {
                cout << "[" << array[i] << "]";
            }
        }
    }

    if (op == 1)
    {
        for (int i = 0; i < num; i++)
        {
            if (array[i] % 2 != 0)
            {
                cout << "[" << array[i] << "]";
            }
        }
    }

    return 0;
}