#include <iostream>
using namespace std;

int main() {
    const char *p, *m;

    p = "Happy Spring break. Have fun!";
    m = p;

    while (*p != '\0') p++;
    --p;

    while (p >= m) cout << *(p--);
}
