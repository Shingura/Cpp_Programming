#include <cmath>
#include <iostream>

using namespace std;

double average(const int arr[])
{
    double sum = 0;
    for (int i = 0; i < 16; ++i)
    {
        sum += arr[i];
    }
    return sum / 16;
}

void del(int* arr, const double ave)
{
    double max_diff = 0;
    int digit = 0;
    for (int i = 0; i < 16; ++i)
    {
        if (abs(arr[i] - ave) > max_diff)
        {
            max_diff = abs(arr[i] - ave);
            digit = i;
        }
    }
    cout << "与平均值相差值最大的数为" << arr[digit] << endl;
    for (int i = digit; i < 15; ++i)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int a[16];
    a[0] = 55;
    for (int i = 1; i < 16; ++i)
    {
        a[i] = (15 * a[i-1] + 97) % 256;
    }
    cout << "原数组为";
    for (int i = 0; i < 16; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    double ave = average(a);
    del(a, average(a));
    cout << "平均值为" << ave << endl;
    cout << "现数组为";
    for (int i = 0; i < 15; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}