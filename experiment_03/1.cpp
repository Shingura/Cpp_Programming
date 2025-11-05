#include <iostream>
using namespace std;

int main()
{
    int chickens, rabbits;
    const int total_legs = 90;
    const int total_heads = 30;
    for (chickens = 0; chickens <= total_heads; chickens++)
    {
        rabbits = total_heads - chickens;
        if ((2 * chickens + 4 * rabbits) == total_legs)
        {
            cout << "鸡：" << chickens << "，兔：" << rabbits << endl;
        }
    }
    return 0;
}