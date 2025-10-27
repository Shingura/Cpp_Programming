#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, digit1, digit2, digit3;
    for (i = 100; i <= 999; ++i)
    {
        digit1 = i / 100;
        digit2 = i / 10 % 10;
        digit3 = i % 10;
        if (i == pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3))
        {
            cout << i << endl;
        }
    }
    return 0;
}