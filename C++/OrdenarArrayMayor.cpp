#include <iostream>

using namespace std;

int main()
{
    int num;
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (array[j] < array[j + 1])
            {
                num = array[j];
                array[j] = array[j + 1];
                array[j + 1] = num;
            }
        }
    }

    for (int numeros : array)
    {
        cout << numeros << " ";
    }

    return 0;
}