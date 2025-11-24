#include <algorithm>
#include <iostream>
using namespace std;

void change(char* result, int num, int r)
{
    int index = 0;
    while (num > 0)
    {
        int remainer = num % r;
        num = num / r;
        if (remainer < 10)
        {
            result[index++] = '0' + remainer;
        }
        else
        {
            result[index++] = 'A' + (remainer - 10);
        }
    }
    result[index] = *"\0";
    reverse(result, result + index);
}

int main()
{
    char result[100];
    int num, r;
    cin >> num >> r;
    change(result, num, r);
    cout << "十进制数" << num << "转换成" << r << "进制数的结果为" << result << endl;
    return 0;
}