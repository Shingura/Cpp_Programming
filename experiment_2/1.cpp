#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if ((a + b < c) || (b + c < a) || (c + a < b))
    {
        cout << "Not Triangle\n";
    }
    else    {
        cout << "Triangle\n";
    }
    return 0;
}