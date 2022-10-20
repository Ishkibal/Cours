#include <iostream>
using namespace std;

int main() {
int a, b, del;
cin >> a >> b;
if (b == 0) {
	cout << "Impossible";
} else {
del = a/b;
cout << del;
}
return 0;
}

