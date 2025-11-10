#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int upr = 0, lwr = 0, num = 0, space = 0, others = 0;

void count(char s1[])
{
    for (int i = 0; i < strlen(s1); ++i)
    {
        if (s1[i] >= '0' && s1[i] <= '9')
        {
            num += 1;
        }
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            lwr += 1;
        }
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            upr += 1;
        }
        if (s1[i] == ' ')
        {
            space += 1;
        }
        else
        {
            others = strlen(s1) - upr - lwr - num - space;
        }
    }
}

int main()
{
    char s1[100];
    cin.getline(s1, 100);
    count(s1);
    cout << "大写字符：" << upr << endl;
    cout << "小写字符：" << lwr << endl;
    cout << "数字字符：" << num << endl;
    cout << "空格字符：" << space << endl;
    cout << "其他字符：" << others << endl;
    return 0;
}
