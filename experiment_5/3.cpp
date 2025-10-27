#include <iostream>
using namespace std;

int main()
{
    int a, n;
    long long sum = 0;
    cin >> a >> n;
    long long term = 0;
    for (int i = 1; i <= n; ++i)
    {
        term = term * 10 + a;
        sum += term;
    }
    cout << "s=" << sum << endl;
    return 0;
}