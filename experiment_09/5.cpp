#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(const int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int upper_prime(const int n)
{
    for (int i = n + 1; i > 0; ++i)
    {
        if (is_prime(i))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int array[4][4];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> array[i][j];
        }
    }
    cout << "变换前的数组a:" << endl;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "变换后的数组a:" << endl;
    int count = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (j < i) continue;
            if (is_prime(array[i][j]))
            {
                count += 1;
                array[i][j] = upper_prime(array[i][j]);
            }
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "素数个数:" << count << endl;
}
