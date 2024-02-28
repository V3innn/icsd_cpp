#include <iostream>
using namespace std;

float average(float, float);
float average(float [], int);

int main() {
float a = 3.0;
int b = 2;
float c[5] = {20, 15.5, 30, 25.5, 40};

cout << "O mesos oros twn 2 arithmwn einai :" << average(a, b) << endl;
cout << "O mesos oros twn stoixeiwn tou pinaka einai :" << average(c, 5) << endl;
}


// Μέσος όρος πραγματικών αριθμών
float average(float x, float y) {
	return (x + y)/2.0;
}


// Μέσος όρος στοιχείων πίνακα
float average (float x[], int n) { 
    float sum = 0;
    int i;

for (i = 0; i < n; i++)
    sum += x[i];

return sum/n;
}
