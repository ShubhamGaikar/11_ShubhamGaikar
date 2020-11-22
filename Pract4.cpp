#include <iostream>
using namespace std;
int main() {
 int num;

 cout << "Enter an Integer¥n";
 cin >> num;
 // When we divide a number by 2, If remainder
// is 1 the it is odd number otherwise even
 if (num % 2 == 0) {
 cout << num << " is EVEN Number";
 } else {
 cout << num << " is ODD Number";
 }

 return 0;
}
