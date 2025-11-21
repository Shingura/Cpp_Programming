#include <cmath>
#include <iostream>
using namespace std;

double f1(double x)
{
    return 1.0 / (2.0 + sin(x));
}

double f2(double x)
{
    return 1.0 / (2.0 - cos(x));
}

double f3(double x)
{
    return (1.0 + x) / (1.0 + x * x);
}

double integral(double (*f)(double), double a, double b, int n)
{
    double h = (b - a) / n;
    double area = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; ++i)
    {
        area += f(a + i * h);
    }
    return area * h;
}

int main()
{
    cout << "f1(x)=" << endl;
    cout << "n=1000  " << integral(f1, 1.0, 2.0, 1000) << endl;
    cout << "n=2000  " << integral(f1, 1.0, 2.0, 2000) << endl;
    cout << "n=3000  " << integral(f1, 1.0, 2.0, 3000) << endl;
    cout << "f2(x)=" << endl;
    cout << "n=1000  " << integral(f2, 2.0, 3.0, 1000) << endl;
    cout << "n=2000  " << integral(f2, 2.0, 3.0, 2000) << endl;
    cout << "n=3000  " << integral(f2, 2.0, 3.0, 3000) << endl;
    cout << "f3(x)=" << endl;
    cout << "n=1000  " << integral(f3, 2.0, 4.0, 1000) << endl;
    cout << "n=2000  " << integral(f3, 2.0, 4.0, 2000) << endl;
    cout << "n=3000  " << integral(f3, 2.0, 4.0, 3000) << endl;
    return 0;
}