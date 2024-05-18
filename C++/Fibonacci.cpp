#include <iostream>

using namespace std;

int main()
{

    int num1 = 0, num2 = 1, suma = 1, filas;

    cin >> filas;

    for (int i = 0; i < filas; i++)
    {
        cout << suma;

        suma = num1 + num2;
        num1 = num2;
        num2 = suma;
    }

    return 0;
}