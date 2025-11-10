#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void longest_word(char s1[])
{
    int max_length = 0;
    int length = 0;
    int start_index = 0;
    int current_start_index = 0;

    for (int i = 0; i < strlen(s1); ++i)
    {
        if (isalpha(s1[i]))
        {
            if (length == 0)
            {
                current_start_index = i;
            }
            length += 1;
        }
        else
        {
            if (length > max_length)
            {
                max_length = length;
                start_index = current_start_index;
            }
            length = 0;
        }
    }
    if (length > max_length)
    {
        max_length = length;
        start_index = current_start_index;
    }
    for (int i = start_index; i < start_index + max_length; ++i)
    {
        cout << s1[i];
    }
    cout << endl;
}

int main()
{
    char s1[100];
    cin.getline(s1, 100);
    longest_word(s1);
    return 0;
}