#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, i, isPrime = 1;
    cin >> num;
    if (num < 2)
    {
        cout << num << "不是素数";
        return 0;
    }
    for (i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
    {
        cout << num << "是素数";
    }
    else    {
        cout << num << "不是素数";
    }
    return 0;
}