#include <iostream>
#include <string>
using namespace std;

int main() {
int count;
string s;
cin >> s;
for (int i = 0; i < s.size(); ++i) {
if (s[i] == 'f') {
	++count;
if (count == 2) 
cout << i << " ";	
	}
}
if (count == 0) {
	cout << "-2";
} else if (count == 1) {
	cout << "-1";
}
return 0;
}
//Вроде бы получилось.
