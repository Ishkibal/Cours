#include <iostream>
using namespace std;

int main() {
int a, b;
double x, y, n, w;
cin >> n >> a >> b >> x >> y;
if (n > b) {
	w = n - (n/100*y);
	cout << w;
} else if (n > a) {
	w = n - (n/100*x);
	cout << w;
} else 
cout << n;
return 0;
}

