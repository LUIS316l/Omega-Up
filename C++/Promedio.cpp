#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float suma = 0, calificaciones;

    for (int i = 0; i < 7; i++)
    {
        cin >> calificaciones;
        suma += calificaciones;
    }

    float promedio = suma / 7;

    cout << fixed << setprecision(1);
    cout << promedio;

    return 0;
}

// https://omegaup.com/arena/problem/Promedio-Calificaciones-/