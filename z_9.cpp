#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> v;
int a, b, c;
cin >> a;
while (a != 0) {
b = a % 2;
a = a/2;
v.push_back(b);
}
for (int i = v.size() - 1; i >= 0; --i) {
cout<<v[i];
}
return 0;
}

//Читаем ответ в обратном порядке)
