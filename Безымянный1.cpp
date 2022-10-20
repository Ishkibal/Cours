#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v = {1,2,3,4,5};
int a, b, c;
cin >> a;
while (a > 0) {
b = a % 2;
a = a/2;

 cout << v.back() << ' ';

}

return 0;
}

//Вроде бы получилось.
