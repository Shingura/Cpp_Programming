#include <iostream>
using namespace std;

int main()
{
    int array_1[3][4];
    for (int i = 0; i < 3; ++i) // 遍历行
    {
        for (int j = 0; j < 4; ++j) // 遍历列
        {
            cin >> array_1[i][j];
        }
    }
    int col_sum[4] = {0, 0, 0, 0};
    for (int j = 0; j < 4; ++j) // 遍历列
    {
        for (int i = 0; i < 3; ++i) // 遍历行
        {
            col_sum[j] += array_1[i][j]; // 计算每列之和
        }
    }
    int array_2[3][4];
    for (int count = 0; count < 4; ++count)
    {
        int min_sum = 999999;
        int min_index = 0;
        for (int j = 0; j < 4; ++j)
        {
            if (col_sum[j] < min_sum)
            {
                min_sum = col_sum[j];
                min_index = j;
            }
        }
        for (int i = 0; i < 3; ++i)
        {
            array_2[i][count] = array_1[i][min_index];
        }
        col_sum[min_index] = 999999; // min_index 列已被处理
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << array_2[i][j] << " ";
        }
        cout << endl;
    }
}