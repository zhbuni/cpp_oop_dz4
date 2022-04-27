#include <cmath>
#include <iostream>
using namespace std;
int main(){
    float a = -0.6;
    float b = 5.3;
    float z;

    if (a < b) z = std::sqrt(abs(a*a - b*b));
    else z = 1 - 2 * cos(a) * sin(b);

    float t;
    if (z < b)t = std::pow(z + a*a*b, 1/3);
    else if (z == b) t = 1 - log(z) + cos(a * a * b);
    else t = 1/cos(z*a);
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "z = " << z << '\n';
    cout << "t = " << t << '\n';
}