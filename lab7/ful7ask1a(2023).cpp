#include <iostream>
using namespace std;

void f1(double& x, double& y) {
cout << x << endl;
cout << y << endl;
x = x/2;
y = 2* y;
}

int main() {
double i=30, j=60;
cout << i << ", " << j << endl;
f1(i, j);
cout << i << ", " << j << endl;
return 0;
}