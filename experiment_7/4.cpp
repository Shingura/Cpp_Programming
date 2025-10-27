#include <iostream>
using namespace std;

int func(int n)
{
    int result = 1;
    while (n > 0)
    {
        result *= n % 10;
        n = n / 10;
    }
    return result;
}

int main()
{
    int input = 1;
    while (true)
    {
        cin >> input;
        if (input == 0)
        {
            break;
        }
        cout << input << "的各位数之积为" << func(input) << endl;
    }
    return 0;
}