#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i, _max_;
    cin >> a >> b >> c;
    for (i = 1; i <= ((a < b ? a : b) < c ? b : c); ++i)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            _max_ = i;
        }
    }
    cout << _max_;
    return 0;
}