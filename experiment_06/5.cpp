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

double func_recur(double x)
{
    if (abs(func(x)) < 1e-5)
    {
        return x;
    }
    return func_recur(x - func(x) / func_(x));
}

int main()
{
    cout << "x=" << func_recur(0.0) << endl;
    return 0;
}