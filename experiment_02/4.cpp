#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, delta, root1, root2;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "方程无实根！" << endl;
    }
    else    {
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        if (root1 == root2)
        {
            cout << "方程有两个相等的实根：x=" << root1 << endl;
        }
        else        {
            cout << "方程有两个不同的实根：x1=" << root1 << "，x2=" << root2 << endl;
        }
    }
    return 0;
}