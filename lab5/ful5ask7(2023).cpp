#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Orthogwnio {
private:
    double mhkos;
    double platos;

    double embadon() {
        return mhkos * platos;
    }

    double perimetros() {
        return 2*mhkos + 2*platos;
    }

public:
    Orthogwnio();
    Orthogwnio(double m, double p):mhkos(m), platos(p) {};

    void display();
};

Orthogwnio::Orthogwnio() {
    mhkos = 0 ;
    platos = 0;
}

void Orthogwnio::display() {
    cout<<"to platos einai: " << platos <<endl;
    cout<<"to mhkos einai: " << mhkos <<endl;
    cout<<"h perimetros einai: " << perimetros() <<endl;
    cout<<"to embadon einai: " << embadon() <<endl<<endl;
}

int main() {
    ifstream fin("data.txt");
    if(!fin) {
        cout<<"file error";
        return 1;
    }

    int c;
    fin >> c;

    double a, b;
    for (int i = 1; i <= c ; i++) {
        fin >> a >> b;
        Orthogwnio o(a, b );
        o.display();
    }

    return 0;
}
