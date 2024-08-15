#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, suma = 0;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < array.size() / 2; i++)
    {
        suma = array[i] + array[n - 1 - i];
        cout << suma << " ";
    }

    return 0;
}

// https://omegaup.com/arena/problem/Sumando-elementos-opuestos-de-un/