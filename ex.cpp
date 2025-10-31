#include <iostream>
#include <cmath>
using namespace std;

void ascend(int n)
{
    if (n == 0)
    {
        return;
    }
    ascend(n / 10);
    cout << n % 10;
}

void descend(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n % 10;
    descend(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << "正序：";
    ascend(n);
    cout << endl;
    cout << "反序：";
    descend(n);
    return 0;
}