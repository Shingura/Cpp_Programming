#include <iostream>
#include <cctype>
using namespace std;

int strtoint(char* sp, int num[])
{
    int count = 0;
    int current_num = 0;
    for (int i = 0; sp[i] != '\0'; ++i)
    {
        if (isdigit(sp[i]))
        {
            current_num = current_num * 10 + sp[i] - '0';
        }
        else
        {
            if (current_num != 0)
            {
                num[count++] = current_num;
                current_num = 0;
            }
        }
    }
    if (current_num != 0)
    {
        num[count++] = current_num;
    }
    return count;
}

int main()
{
    char input[100];
    cin.getline(input, 100);

    int num[100];
    int count = strtoint(input, num);
    for (int i = 0; i < count; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}