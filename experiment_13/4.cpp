#include <iostream>
using namespace std;

int findn(const char* str,const char* substr)
{
    int count = 0;
    // 第一个相同时，开始往后遍历至 substr 结束，如果均相同，则找到子串。
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == substr[0]) // 第一项相同。
        {
            for (int j = 1; substr[j] != '\0'; ++j) // 遍历至 substr 结束。
            {
                if (str[i + j] != substr[j]) // 在结束前找到不同项，则说明非子串。
                {
                    break;
                }
            }
            // 遍历结束也没有找到不同项，则说明为子串。
            count += 1;
        }
    }
    return count;
}

int main()
{
    char input[100];
    cin.getline(input,100);
    cin.ignore();
    char substr[100];
    cin.getline(substr,100);
    cout << "n=" << findn(input,substr) << endl;
}