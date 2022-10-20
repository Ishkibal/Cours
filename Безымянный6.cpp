#include <iostream>
#include <string>
using namespace std;

int main() {
string a;
cin >> a;
 for (int i = 0; i < a.size(); ++i) {
 	if (a[i] == 'f') {
cout << i << endl;
 }
}
return 0;
}

