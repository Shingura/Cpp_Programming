#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (!(num > 0 && num <= 10))
    {
        cout << "输入有错";
    }
    else    {
        int sum = 0;
        int i;
        for (i = 1; i <= num; ++i)
        {
            int j, exp = 1;
            for (j = 1; j <= i; ++j)
            {
                exp *= j;
            }
            sum += exp;
        }
        cout << sum << endl;
    }
    return 0;
}