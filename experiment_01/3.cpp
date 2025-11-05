#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, area;
    cin >> radius;
    area = PI * radius * radius;
    cout << area;
    return 0;
}