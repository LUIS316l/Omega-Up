#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sumar(const vector<int> &array)
{
    int suma = 0;

    for (int numeros : array)
    {
        suma += numeros;
    }

    return suma;
}

int resta(const vector<int> &array)
{
    int resta = array[0];

    for (int i = 0; i < array.size(); i++)
    {
        resta -= array[i];
    }

    return resta;
}

int multiplicacion(const vector<int> &array)
{
    int multiplicacion = 1;

    for (int numeros : array)
    {
        multiplicacion *= numeros;
    }

    return multiplicacion;
}

int division(const vector<int> &array)
{

    if (array.empty())
    {
        cout << "No se puede dividir entre cero.";
        return 0;
    }

    int division = array[0];

    for (int i = 1; i < array.size(); i++)
    {
        if (array[i] != 0)
        {
            division /= array[i];
        }
        else
        {
            cout << "No se puede dividir entre cero.";
            return 0;
        }
    }

    return division;
}

int potencia(const vector<int> &array)
{
    if (array.size() != 2)
    {
        cout << "Se requieren exactamente 2 números para la operación de potencia.";
        return 0;
    }

    return pow(array[0], array[1]);
}

int modulo(const vector<int> &array)
{
    if (array.size() != 2)
    {
        cout << "Se requieren exactamente 2 números para la operación de módulo.";
        return 0;
    }

    return array[0] % array[1];
}

int main()
{

    int resultado = 0, n, op = 0;

    do
    {
        cout << "\n === Calculadora === \n\n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Divicion \n 5. Potencia \n 6. Modulo \n 7. Salir \n\n";
        cout << "Opcion: ";
        cin >> op;

        if (op == 7 || op < 1 || op > 7)
        {
            break;
        }

        cout << "\nIngrese la cantidad de numeros: ";
        cin >> n;

        vector<int> array(n);

        for (int i = 0; i < array.size(); i++)
        {
            cout << (i + 1) << ": ";
            cin >> array[i];
        }

        switch (op)
        {
        case 1:
            resultado = sumar(array);
            cout << "\nLa suma es: " << resultado;
            break;

        case 2:
            resultado = resta(array);
            cout << "\nLa resta es: " << resultado;
            break;

        case 3:
            resultado = multiplicacion(array);
            cout << "\nLa multiplicacion es: " << resultado;
            break;

        case 4:
            resultado = division(array);
            cout << "\nLa division es: " << resultado;
            break;

        case 5:
            resultado = potencia(array);
            cout << "\nLa potencia es: " << resultado;
            break;

        case 6:
            resultado = modulo(array);
            cout << "\nEl modulo es: " << resultado;
            break;

        default:
            cout << "Opcion invalida.....";
            break;
        }
    } while (op != 7);

    return 0;
}
