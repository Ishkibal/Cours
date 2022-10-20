#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a, b, c, x, f, d;
double k1, k2;
cin >> a >> b >> c;
f = a*pow(x,2) + b*x + c;
d = pow(b,2) - 4 * a * c;
k1 = (-b + sqrt(d)) / (2*a);
k2 = (-1 * b - sqrt(d)) / (2*a);
cout << "x1=" << k1 << " x2=" << k2;
return 0;
} 
// Даже не знаю, на сколько это рукожопие "долго" работает, а может так и надо.
