#include <iostream>
#include <limits>

using namespace std;

int main()
{

    int numeros, min = numeric_limits<int>::max(), max = numeric_limits<int>::min();

    for (int i = 0; i < 5; i++)
    {
        cin >> numeros;

        if (numeros < min)
        {
            min = numeros;
        }

        if (numeros > max)
        {
            max = numeros;
        }
    }

    cout << min << " " << max;

    return 0;
}

// https://omegaup.com/arena/problem/Mayor-menor/