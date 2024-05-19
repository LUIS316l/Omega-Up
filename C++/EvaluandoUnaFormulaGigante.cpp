#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, operacion;

    cin >> x >> y >> z;

        operacion = (((2 * x + y) / z) * (pow(y, 3) - z)) / ((x + 2 * y + 3 * z) / (z - 2 * y - 3 * x) + pow(x, 2) + pow(z, 2));

        cout << operacion;
    
    return 0;
}
