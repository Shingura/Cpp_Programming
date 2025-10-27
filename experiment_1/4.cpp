#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, s, c, delta;
    cin >> a >> b >> c;
    s = a + b + c;
    delta = s / 2;
    c = sqrt((delta * (delta - a) * (delta - b) * (delta - c)));
    cout << s << " " << c << endl;
    return 0;
}