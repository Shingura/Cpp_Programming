#include <iostream>
using namespace std;

int main(){
    double f, c;
    cin >> f;
    c = (f - 32) / 1.8;
    cout << "华氏温度" << f << "相当于摄氏温度" << c << endl;
    return 0;
}