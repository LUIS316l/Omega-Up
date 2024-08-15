#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << ((a < c && b < d) ? "Hueso 2" : (a > c && b > d) ? "Hueso 1"
                                                             : "Perrito confundido :(");

    return 0;
}

// https://omegaup.com/arena/problem/El-perrito-que-quiere-un-hueso/