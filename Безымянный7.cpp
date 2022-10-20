#include <iostream>
using namespace std;

int main() {
int a, b, c;
cin >> a >> b;
while (a <= b) {
c = a++;
if (c % 2 == 0) {
cout << c << " ";
}
}
return 0;
}
//Чет долго я просидел, около часа наверн с этим циклом, то он бесконечный был, то первое четное число не выводил, вроде сейчас работает.
