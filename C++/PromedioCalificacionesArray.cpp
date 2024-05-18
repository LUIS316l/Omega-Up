#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float suma = 0;
    float calificaciones[7];

    for (int i = 0; i < 7; i++)
    {
        cout << "Digite la calificacion " << (i + 1) << ": ";
        cin >> calificaciones[i];
    }

    for (int i = 0; i < 7; i++)
    {
        suma += calificaciones[i];
    }

    float promedio = suma / 7;

    cout << fixed << setprecision(1);
    cout << "El primeio es: " << promedio << endl;

    return 0;
}