#include <iostream>

using namespace std;

int main()
{

    int num, fact = 1;

    cin >> num;

    for (int i = num; i > 0; i--)
    {
        if (num <= 15)
        {
            fact = fact * i;
        }
        else
        {
            cout << "Numero invalido";
        }
    }

    cout << fact;

    return 0;
}