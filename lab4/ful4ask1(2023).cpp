#include <iostream>
using namespace std;

double emvadon_trapeziou(int vasi_megali=2, int vasi_mikri=2, int ipsos=4) {
	return ((vasi_megali+vasi_mikri)*ipsos/2.0);
}

int main() {
double e;

e = emvadon_trapeziou();
cout << "To emvadon tou trapeziou stin 1h periptwsi einai: " << e << endl;

e = emvadon_trapeziou(5);
cout << "To emvadon tou trapeziou stin 2h periptwsi einai: " << e << endl;

e = emvadon_trapeziou(5, 3);
cout << "To emvadon tou trapeziou stin 3h periptwsi einai: " << e << endl;

e = emvadon_trapeziou(5, 3, 3);
cout << "To emvadon tou trapeziou stin 4h periptwsi einai: " << e << endl;

return 0;
}
