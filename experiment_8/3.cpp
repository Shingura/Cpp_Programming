#include <iostream>
using namespace std;

int main()
{
    double array[10];
    for (int i = 0; i < 10; ++i)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (array[j] > array[j + 1])
            {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < 10; ++k)
    {
        cout << array[k] << " ";
    }
    return 0;
}