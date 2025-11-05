#include <iostream>
using namespace std;

int main()
{
    int array[9][9];
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            array[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (j > i) break;
            cout << i + 1 << "*" << j + 1 << "=" << array[i][j] << ' ';
        }
        cout << endl;
    }
}