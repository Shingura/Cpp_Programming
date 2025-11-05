#include <iostream>
using namespace std;

int main()
{
    double array[10];
    for (int i = 0; i < 10; ++i)
    {
        cin >> array[i];
    }
    double temp = 0;
    for (int i = 0; i < 10; ++i)
    {
        int min_index = i;
        for (int j = i; j < 10; ++j)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    for (int i = 0; i < 10; ++i)
    {
        cout << array[i] << " ";
    }
    return 0;
}