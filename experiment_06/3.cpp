#include <iostream>
#include <cmath>
using namespace std;

double func(double x)
{
    return pow(x, 2) + 3 * x - 4;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double c = (a + b) / 2.0;
    while (!(abs(func(c)) < 1e-5))
    {
        if (func(a) * func(c) > 0)
        {
            a = c;
        }
        else if (func(a) * func(c) < 0)
        {
            b = c;
        }
        c = (a + b) / 2.0;
    }
    cout << "x=" << c << endl;
    return 0;
}