#include <iostream>
#include <string>
using namespace std;

int main() {
string x,y, z, min;
cin >> x >> y >> z;
if (x<y) {
	min = x;
} else {
min = y;
}
if (min>z) {
	cout << z;
} else 
cout << min;
return 0;
}
// ���� �� ����, �� ������� ��� ��������� "�����" ��������, � ����� ��� � ����.
