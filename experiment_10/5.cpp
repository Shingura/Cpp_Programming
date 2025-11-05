#include <iostream>
using namespace std;

void count_num(int* count, int num)
{
    if (num / 10)
    {
        count_num(count, num / 10);
    }
    count[num % 10] += 1;
}

int main()
{
    int num;
    cin >> num;
    int* array = new int[num];
    for (int i = 0; i < num; ++i)
    {
        cin >> array[i];
    }
    int* count = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        count[i] = 0;
    }
    for (int i = 0; i < num; ++i)
    {
        count_num(count, array[i]);
    }
    cout << "数字0到9出现的次数分别为" << endl;
    for (int i = 0; i < 10; ++i)
    {
        cout << i << "\t" << count[i] << endl;
    }
    delete[] array;
    delete[] count;
}