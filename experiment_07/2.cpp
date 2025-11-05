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
    for (int i = 2; i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (is_Prime(i))
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}