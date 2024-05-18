#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 101; i++)
    {
        cout << ((i % 3 == 0 && i % 5 == 0) ? "FizzBuzz" : (i % 3 == 0) ? "Fizz"
                                                       : (i % 5 == 0)   ? "Buzz"
                                                                        : to_string(i))
             << endl;
    }

    return 0;
}