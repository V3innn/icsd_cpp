#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    int *q = new int;

    *p = 26;
    *q = 10;
    cout << 2 * (*p) << " " << (*q + 3) << endl;
    p = q;
    *p = 42;
    cout << *p << " " << *q << endl;
    q = new int;
    *p = 25;
    *q = 18;
    cout << *p << " " << *q << endl;
}
