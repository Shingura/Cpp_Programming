#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int count_words(char s1[])
{
    int count = 0;
    bool in_word = false;
    for (int i = 0; i < strlen(s1); ++i)
    {
        if (isalpha(s1[i]))
        {
            if (!in_word)
            {
                count += 1;
                in_word = true;
            }
        }
        else
        {
            in_word = false;
        }
    }
    return count;
}

int main()
{
    char s1[100];
    cin.getline(s1, 100);
    int count = count_words(s1);
    cout << "共" << count << "个单词" << endl;
}