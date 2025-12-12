#include <iostream>
#include <cmath>

class triangle
{
    private:
        double a, b, c;
    public:
        bool validation = true;
        triangle(double x, double y, double z)
        {
            if (x + y <= z || x + z <= y || y + z <= x)
            {
                std::cout << "Error: 三条边不符合三角形的定义" << std::endl;
                validation = false;
            }
            a = x; b = y; c = z;
        }

        double Perimeter() const
        {
            return a + b + c;
        }

        double Area() const
        {
            double p = (a + b + c) / 2;
            double area = sqrt(p * (p - a) * (p - b) * (p - c));
            return area;
        }

        void Show() const
        {
            std::cout << "三角形的边长是" << a << ", " << b << ", " << c << std::endl;
            std::cout << "三角形的周长是" << Perimeter() << std::endl;
            std::cout << "三角形的面积是" << Area() << std::endl;
        }
};

int main()
{
    double a, b, c;
    std::cout << "请输入三条边的边长：" << std::endl;
    std::cin >> a >> b >> c;
    triangle tri(a, b, c);
    if (!tri.validation) return 1;
    tri.Show();
    return 0;
}