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

/* 现代 C++ 实现：
#include <algorithm>
#include <iostream>
#include <array>
#include <iterator>

int main()
{
    std::array<int, 12> a = {2, 4, 6, 8, 10, 12, 
                            14, 16, 18, 20, 22, 24}; // 共 12 个数
    int num { };
    std::cin >> num;

    auto it = std::find(a.begin(), a.end(), num);

    if ( it != a.end() )
    {
        std::cout << "该数在数组中的序号为" << std::distance(a.begin(),it) << '\n';
    }
    else {
        std::cout << "数组中没有该元素！\n" ;
    }

    return 0;
}
*/

