#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24}; // 共 12 个数
    int left = 0, right = 11;
    int num;
    cin >> num;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == num)
        {
            cout << "该数在数组中的序号为" << mid << endl;
            return 0;
        }
        else if (a[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << "数组中没有该元素！" << endl;
}