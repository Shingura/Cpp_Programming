#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int x)
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
    for (int i = 100; i<= 200; ++i)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}