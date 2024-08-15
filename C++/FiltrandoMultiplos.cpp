#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num, k;
    cin >> num;
    vector<int> array(num);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    cin >> k;

    for (int i = 0; i < array.size(); i++)
    {
        cout << ((array[i] % k != 0) ? "X" : to_string(array[i])) << " ";
    }

    return 0;
}

// https://omegaup.com/arena/problem/Filtrando-multiplos/