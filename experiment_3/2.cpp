#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 599; ++i)
    {
        bool by_3 = (i % 3 == 0);
        bool has_5 = (i / 100 == 5) || (i / 10 % 10 == 5) || (i % 10 == 5);
        if (by_3 && has_5)
        {
            cout << setw(10) << i;
            count++;
            if (count == 10)
            {
                cout << endl;
                count = 0;
            }
        }
    }
    return 0;
}