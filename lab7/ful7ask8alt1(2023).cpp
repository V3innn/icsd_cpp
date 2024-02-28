/*
* Εναλλακτική λύση 1
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
    float aktina;
public:
    float emvado() {
        return pow(aktina, 2)*PI;
    }
    void set_aktina(float r) {
        aktina=r;
    }
    // Προσθήκη συνάρτησης για να λαμβάνει την τιμή της private μεταβλητής aktina
    float get_aktina() {
        return aktina;
    }
};

class Sphere : public Circle {
public:
    float emvado() {
        // Χρήση της get_aktina
        return 4*pow(get_aktina(), 2)*PI;
    }
    float ogos() {
        // Χρήση της get_aktina
        return 4/3.0*pow(get_aktina(), 3)*PI;
    };
};

int main() {
    Circle c1;
    c1.set_aktina(2.0);
    cout<<"R: "<<c1.get_aktina()<<endl;
    cout<<"Area: "<<c1.emvado()<<endl<<endl;
    Sphere s1;
    s1.set_aktina(5.0);
    cout<<"R: "<<s1.get_aktina()<<endl;
    cout<<"Area: "<<s1.emvado()<<endl;
    cout<<"Vol: "<<s1.ogos()<<endl<<endl;
    return 0;
}
