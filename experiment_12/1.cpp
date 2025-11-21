#include <iostream>
#include <vector>
using namespace std;

void shift(vector<int>& a, int n, int p)
{
    vector<int> temp;
    for (int i = p + 1; i < n; ++i)
    {
        temp.push_back(a[i]);
    }

    for (int i = 0; i <= p; ++i)
    {
        temp.push_back(a[i]);
    }
    a = temp;
}

int main()
{
    int p, x;
    cin >> p;

    vector<int> a;
    while (cin >> x && x != 0)
    {
        a.push_back(x);
    }
    shift(a, a.size(), p);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}