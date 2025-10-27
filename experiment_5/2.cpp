#include <iostream>
using namespace std;

int main()
{
    int n;
    double x;
    cin >> n >> x;
    double sum = 0.0;
    double term = x;
    int sign = 1;
    for (int i = 1; i <= n; ++i)
    {
        sum += sign * term;
        term *= x * x / ((2 * i) * (2 * i + 1));
        sign = -sign;
    }
    cout << "y=" << sum << endl;
    return 0;
}