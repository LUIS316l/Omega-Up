#include <iostream>

using namespace std;

int main()
{
    int peso;
    cout << "Ingrese el peso de la sandia: ";
    cin >> peso;

    cout << (peso % 2 == 0 && peso > 2) ? "si" : "no";

    return 0;
}

// https://omegaup.com/arena/problem/Watermel/