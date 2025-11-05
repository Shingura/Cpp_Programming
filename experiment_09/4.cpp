#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int array_1[8][8];
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (j > i) break;
            array_1[i][j] = 1;
        }
    }
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            if (j > i) break;
            array_1[i + 2][j + 1] = array_1[i + 1][j + 1] + array_1[i + 1][j];
        }
    }
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (j > i) break;
            cout << setw(5) << array_1[i][j];
        }
        cout << endl;
    }
}