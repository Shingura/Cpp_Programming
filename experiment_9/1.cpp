#include <iostream>
using namespace std;

int main()
{
    int array[4][4];
    for (int i = 0; i <= 3; ++i)
    {
        for (int j = 0; j <= 3; ++j)
        {
            cin >> array[i][j];
        }
    }

    int max = array[0][0];
    int max_row = 0;
    int max_col = 0;
    for (int i = 0; i <= 3; ++i)
    {
        for (int j = 0; j <= 3; ++j)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }

    cout << "第" << max_row << "行第" << max_col << "列是最大数" << max << endl;
}