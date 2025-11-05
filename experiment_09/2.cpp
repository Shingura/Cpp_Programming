#include <iostream>
using namespace std;

int main()
{
    int array_1[4][4];
    int array_2[4][4];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> array_1[i][j];
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            array_2[i][j] = array_1[j][i];
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << array_2[i][j] << " ";
        }
        cout << endl;
    }
}