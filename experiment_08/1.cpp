#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    int array[11] = {a, b, c, d, e, f, g, h, i, j};
    int max = array[0];
    int maxindex = 0;
    for (int k = 0; k < 11; ++k)
    {
        if (array[k] > max)
        {
            max = array[k];
            maxindex = k;
        }
    }
    cout << "max=" << array[maxindex] << endl;
    cout << "maxindex=" << maxindex + 1 << endl;
    return 0;
}