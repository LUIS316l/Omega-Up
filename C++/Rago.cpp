#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cin >> num1;
    cin >> num2;

    cout << (num1 > num2) ? "El primer valor tiene que ser menor.." : "";

    for (int i = num1; i <= num2; i++)
    {
        cout << "[" << i << "]";
    }

    return 0;
}