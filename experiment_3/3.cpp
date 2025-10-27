#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0; // 用来保存各位数字之和
    int t = n;   // 备份原数（可选，只是为了不破坏输入的 n）auto
    while (t > 0)
    {
        sum += t % 10; // 取出最后一位并累加
        t /= 10;       // 去掉最后一位
    }
    cout << sum << endl;
    return 0;
}