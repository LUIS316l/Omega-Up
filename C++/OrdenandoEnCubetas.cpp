#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cantidadDePelotas, maximoNumeroAEncontrar, numPelotas;

    cin >> cantidadDePelotas;
    cin >> maximoNumeroAEncontrar;
    
    vector<int> pelotas(cantidadDePelotas + 1);

    if (maximoNumeroAEncontrar < 101)
    {
        for (int i = 0; i < cantidadDePelotas; i++)
        {
            cin >> numPelotas;
            pelotas[numPelotas]++;

            if (pelotas[numPelotas] > 100)
            {
                cout << "El numero de pelotas exede el rango. ";
                break;
            }
        }

        for (int i = 1; i <= maximoNumeroAEncontrar; i++)
        {
            cout << i << ": " << pelotas[i] << endl;
        }
    }

    return 0;
}

// https://omegaup.com/arena/problem/Ordenando-en-cubetas/