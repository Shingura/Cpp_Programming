#include <iostream>
using namespace std;

double ave(const int* arr)
{
    double sum = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            sum += arr[i * 4 + j];
        }
    }
    return sum / 12;
}

int max(const int (*arr)[4])
{
    int max_value = arr[0][0];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (arr[i][j] > max_value)
            {
                max_value = arr[i][j];
            }
        }
    }
    return max_value;
}

int min(const int (*arr)[4])
{
    int min = arr[0][0];
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
        }
    }
    return min;
}

int main()
{
    int arr[3][4] =
    {
        {2, 3, 4, 5},
        {12, 13, 14, 15},
        {1, 2, 3, 4}
    };
    cout << "ave=" << ave(&arr[0][0]) << endl;
    cout << "max=" << max(arr) << endl;
    cout << "min=" << min(arr) << endl;
    return 0;
}