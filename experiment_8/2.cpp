#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const int size_1 = 99;
    int array_1[size_1];
    for (int i = 0; i < size_1; ++i)
    {
        array_1[i] = i + 2;
    }
    const int size_2 = 25;
    int array_2[size_2];
    int digit = 0;
    for (int j = 0; j < size_1; ++j)
    {
        if (is_prime(array_1[j]))
        {
            array_2[digit] = array_1[j];
            digit += 1;
        }
    }
    int count = 0;
    for (int k = 0; k < size_2; ++k)
    {
        cout << setw(4) << array_2[k];
        count += 1;
        if (count == 5)
        {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}