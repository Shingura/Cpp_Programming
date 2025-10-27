#include <iostream>
#include <cmath>
using namespace std;

double func(double x)
{
    return pow(x, 2) + 3 * x - 4;
}

double func_(double x)
{
    return 2 * x + 3;
}

int main()
{
    double x0 = 0, x1;
    while (!(abs(func(x0)) < pow(10, -5)))
    {
        x1 = x0 - func(x0) / func_(x0);
        x0 = x1;
    }
    cout << "x=" << x0;
    return 0;
}