/*
* Εναλλακτική λύση 2
*/
#include <iostream>
#include <cmath>
#define PI 3.141593
using namespace std;

/*
Το πρόβλημα έγκειται στο ότι οι συναρτήσεις της κλάσης sphere δεν έχουν άμεση
πρόσβαση στην ιδιότητα aktina, διότι είναι private ιδιότητα στην κλάση βάσης.
*/

class Circle {
protected:
    float aktina; // Καθορισμός μεταβλητής ως protected αντί για private
public:
    float emvado() {
        return pow(aktina, 2)*PI;
    }
    void set_aktina(float r) {
        aktina=r;
    }
};

class Sphere: public Circle {
public:
    float emvado() {
        return 4*pow(aktina, 2)*PI;
    }
    float ogos() {
        return 4/3.0*pow(aktina, 3)*PI;
    };
};

int main() {
    Circle c1;
    c1.set_aktina(2.0);
    cout<<"Area: " << c1.emvado()<<endl<<endl;
    Sphere s1;
    s1.set_aktina(5.0);
    cout<<"Area: "<< s1.emvado()<<endl;
    cout<<"Vol: " << s1.ogos()<<endl<<endl;
    return 0;
}
