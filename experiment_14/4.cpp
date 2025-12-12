#include <iostream>
using std::cin, std::cout, std::endl;

class Circle
{
    private:
        int num[20];
        int Max[10];
        int Min[10];
        int max_sum;
        int min_sum;
        int count;
    public:
        Circle()
        {
            for (int i = 0; i < 20; ++i)
            {
                cin >> num[i];
            }
            cin >> count;
        }
        void Find()
        {
            int sum = 0;
            for (int i = 0; i < count; ++i)
            {
                sum += num[i];
            }
            max_sum = sum;
            min_sum = sum;
            for (int i = 1; i < 20; ++i)
            {
                sum = sum - num[i - 1] + num[(i + count - 1) % 20];
                if (sum > max_sum)
                {
                    max_sum = sum;
                    for (int j = 0; j < count; ++j)
                    {
                        Max[j] = num[(i + j) % 20];
                    }
                }
                if (sum < min_sum)
                {
                    min_sum = sum;
                    for (int j = 0; j < count; ++j)
                    {
                        Min[j] = num[(i + j) % 20];
                    }
                }
            }
        }
        void Show()
        {
            cout << "Max=" << max_sum << endl;
            for (int i = 0; i < count; ++i)
            {
                cout << Max[i] << " ";
            }
            cout << endl;
            cout << "Min=" << min_sum << endl;
            for (int i = 0; i < count; ++i)
            {
                cout << Min[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    Circle cir;
    cir.Find();
    cir.Show();
    return 0;
}