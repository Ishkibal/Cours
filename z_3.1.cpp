#include <iostream>
#include <cmath>
using namespace std;

int main() {
int  x, f, d;
double k1, k2, a, b, c;
cin >> a >> b >> c;
d = pow(b,2) - 4 * a * c;
if (d<0) {
cout << "No roots";
} else if (a==0 && b == 0) {
cout << "No solutions";
} else if (a==0 && b != 0) {
k1 =  - c/b;
cout << "x="<<k1;
} else if (d==0) {
f = a*pow(x,2) + b*x + c;
d = pow(b,2) - 4 * a * c;
k1 = -b / (2*a);
cout << "x=" << k1;	
} else {
k1 = (-b + sqrt(d)) / (2*a);
k2 = (-b - sqrt(d)) / (2*a);
cout << "x1=" << k1 << " x2=" << k2;
} 
return 0;
} 
/* ��, ��� �� � ����� � ��� ��� ����� ��� ���� == ��� ����������, ������ � ������ ������ ���� ����� ������, ������ ������� ������
�������� ������� � ����� � ������, ������ ��� ��� ������� ������� ��������, ��� � ��� ��������, ���� � ��������� ��� ������ - ����� ����� ������ � �����.
� ��, ���� ��� ������� �����-�� �������� ������� ������, ������� ��������� � ���� �����. */
