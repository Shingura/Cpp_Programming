#include <complex>
#include <iostream>
using namespace std;

int main()
{
    double x;
    cin >> x;
    double y1 = x;
    double y2 = ((y1 * 2 / 3) + x / (3 * y1 * y1));
    while (!(abs(y2 - y1) <= 0.00001))
    {
        y1 = y2;
        y2 = ((y1 * 2.0 / 3.0) + x / (3 * y1 * y1));
    }
    cout << "y=" << y2 << endl;
    return 0;
}