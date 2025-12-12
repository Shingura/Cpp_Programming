#include <iostream>
#include <cmath>

class NUM
{
    private:
        int n;
        int* p;
    public:
        NUM(int n1)
        {
            n = n1;
            p = new int[n];
        }
        bool is_composite(int x)
        {
            if (x <= 1) return false;
            for (int i = 2; i <= sqrt(x); ++i)
            {
                if (x % i == 0) return true;
            }
            return false;
        }
        void fun()
        {
            int num = 3;
            while (true)
            {
                int count = 0;
                for (int i = num; count < n; ++i)
                {
                    if (is_composite(i))
                    {
                        p[count] = i;
                        count += 1;
                    }
                    else
                    {
                        break;
                    }
                }
                if (count == n)
                {
                    break;
                }
                num += 1;
            }
        }

        void print()
        {
            for (int i = 0; i < n; i++)
            {
                std::cout << p[i] << " ";
            }
            std::cout << std::endl;
        }
        ~NUM()
        {
            delete[] p;
        }
};

int main()
{
    int k;
    std::cin >> k;
    NUM num(k);
    num.fun();
    num.print();
    return 0;
}