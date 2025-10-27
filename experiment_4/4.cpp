#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, j, count = 0;
    for (i = 100; i < 200; ++i)
    {
        int isPrime = 1;
        for (j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            cout << i << " ";
            count += 1;
            if (count == 5)
            {
                cout << endl;
                count = 0;
            }
        }
    }
    return 0;
}