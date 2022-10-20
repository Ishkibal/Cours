#include <iostream>
using namespace std;

int main() {
int x, y;
cin >> x;
while (x/2 <=1 ) {
y = x % 2;
x = x/2;
}
cout << y;

return 0;
}
//Вроде бы получилось.
