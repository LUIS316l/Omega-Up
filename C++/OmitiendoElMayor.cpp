#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cont = 0, num;
    cin >> num;
    vector<int> array(num);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    int mayor = array[0];

    for (int numeros : array)
    {
        cont += (numeros != mayor) ? 1 : 0;
        mayor = (numeros > mayor) ? numeros : mayor;
    }

    cout << cont;

    for (int numeros : array)
    {
        if (numeros != mayor)
        {
            cout << numeros << " ";
        }
    }

    return 0;
}

// https://omegaup.com/arena/problem/Omitiendo-el-entero-mas-grande/