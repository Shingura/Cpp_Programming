#include <iostream>
#include <cmath>
using namespace std;

double func(double x)
{
    double result = 2.0 * pow(x, 2) + 5.0 * x + 3.0;
    return result;
}
int main()
{
    double x;
    cin >> x;
    cout << func(x) << endl;
    return 0;
}