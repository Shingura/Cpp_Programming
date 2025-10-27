#include <iostream>
using namespace std;

int main()
{
    int a, b, i, j, _max_, _min_;
    cin >> a >> b;
    for (i = 1; i <= min(a, b); ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            _max_ = i;
        }
    }
    for (j = max(a, b);; ++j)
    {
        if (j % a == 0 && j % b == 0)
        {
            _min_ = j;
            break;
        }
    }
    cout << a << "和" << b << "的最大公约数是" << _max_ << endl;
    cout << a << "和" << b << "的最小公倍数是" << _min_ << endl;
    return 0;
}