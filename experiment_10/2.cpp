#include <iostream>
using namespace std;

int del(int* array, int num_1)
{
    int num_2 = num_1;
    for (int i = 0; i < num_1; ++i)
    {
        if (array[i] == array[i + 1])
        {
            for (int j = i; j < num_1 - 1; ++j)
            {
                array[j] = array[j + 1];
            }
            num_2 -= 1;
        }
    }
    return num_2;
}

int main()
{
    int num_1;
    cin >> num_1;
    int* array = new int[num_1];
    for (int i = 0; i < num_1; ++i)
    {
        cin >> array[i];
    }

    for (int i = 0; i < del(array, num_1); ++i)
    {
        cout << array[i] << " " ;
    }
    cout << endl;
    delete[] array;
    return 0;
}