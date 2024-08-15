#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % a == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// https://omegaup.com/arena/problem/MDUI-UAMA/#problems