#include <iostream>
#include <cmath>
using namespace std;

bool is_Prime(int x)
{
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (is_Prime(i) && is_Prime(n - i))
        {
            cout << n << "=" << i << "+" << n - i << endl;
        }
    }
    return 0;
}