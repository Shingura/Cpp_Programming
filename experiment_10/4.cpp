#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> origin;
    int input_value;

    while (true)
    {
        cin >> input_value;
        if (input_value == 0) break;
        origin.push_back(input_value);
        if (origin.size() > 1)
        {
            sort(origin.begin(), origin.end());
        }
    }
    for (int i = 0; i < origin.size(); ++i)
    {
        cout << origin[i] << " ";
    }
}