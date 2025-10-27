#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 1000; ++i)
    {
        int sum = 0;
        for (j = 1; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (i == sum)
        {
            cout << i << endl;
        }
    }
    return 0;
}