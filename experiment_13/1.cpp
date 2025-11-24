#include <iostream>
#include <cstring>
using namespace std;

int string_to_int(char* term)
{
    int result = 0;
    for (int i = 0; i < strlen(term); ++i)
    {
        result = result * 10 + term[i] - '0';
    }
    return result;
}

int main()
{
    char a[100];
    cin >> a;
    cout << string_to_int(a);
    return 0;
}
