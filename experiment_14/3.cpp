#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

class STR
{
    private:
        string origin;
        string result;
    public:
        STR(string str)
        {
            origin = str;
            result = origin;
        }
        void del_same()
        {
            for (int i = 0; i < result.length(); ++i)
            {
                char current_char = result[i];
                for (int j = i + 1; j < result.length();)
                {
                    if (result[j] == current_char)
                    {
                        result.erase(j, 1);
                    }
                    else
                    {
                        j += 1;
                    }
                }
            }
        }
        void show()
        {
            cout << "s1=" << origin << endl;
            cout << "s2=" << result << endl;
        }
};

int main()
{
    string str;
    cin >> str;
    STR test(str);
    test.del_same();
    test.show();
    return 0;
}