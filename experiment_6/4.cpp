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
    double c = (a * func(b) - b * func(a)) / (func(b) - func(a));
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
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
    }
    cout << "x=" << c << endl;
    return 0;
}