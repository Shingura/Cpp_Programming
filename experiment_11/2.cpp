#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void capitalize(char s1[])
{
    int len = strlen(s1);
    s1[0] = toupper(s1[0]);
    for (int i = 1; i < len; ++i)
    {
        if (!isalpha(s1[i - 1]) && islower(s1[i]))
        {
            s1[i] = toupper(s1[i]);
        }
    }
}

int main()
{
    char s1[100];
    cin.getline(s1, 100);
    capitalize(s1);
    cout << s1 << endl;
    return 0;
}