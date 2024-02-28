#include <iostream>
using namespace std;

class Foithths {
protected:
    string onoma;
    string epi8eto;
    int ID;
    int ma8hmata;

public:
    Foithths(string onoma, string epi8eto, int ID, int ma8hmata) {
        this-> onoma = onoma;
        this->epi8eto = epi8eto;
        this-> ID = ID;
        this->ma8hmata = ma8hmata;
    }

void total_ma8hmata(int ma8hma){
    ma8hmata = ma8hmata + ma8hma;
    }

void display() {
    cout << "To onoma tou: " << onoma <<endl;
    cout << "To epi8eto tou: " << epi8eto <<endl;
    cout << "To ID tou: " << ID <<endl;
    cout << "Ta perasmena ma8hmata: " << ma8hmata <<endl;
    }
};

class Proptuxiakos:Foithths {
protected:
    int ergasthria;

public:
    Proptuxiakos(string onoma, string epi8eto, int ID, int ma8hmata, int ergashria):Foithths(onoma, epi8eto, ID, ma8hmata) {
        this->ergasthria = ergashria;
    }

    void Ptuxio(){
        if (ma8hmata >= 40 && ergasthria >= 15)
            cout << "Phres ptuxio" <<endl;
        else
            cout << "Den to phres";
    }

    void display() {
        Foithths::display();
        cout << ergasthria << endl;
    }
};

class Metaptuxiakos:public Foithths {
protected:
    string themaDiplwmatikhs;
public:
    Metaptuxiakos(string onoma, string epi8eto, int ID, int ma8hamta, string themaDiplwmatikhs):Foithths(onoma, epi8eto, ID, ma8hmata) {
        this->themaDiplwmatikhs;
    }

    void Ptuxio(){
        if (ma8hmata >= 10)
            cout << "Phres ptuxio" <<endl;
        else
            cout << "Den to phres";
    }

    void display() {
        Foithths::display();
        cout << themaDiplwmatikhs << endl;
    }
};

class Didaktorikos:public Metaptuxiakos {
protected:
    int xroniaEreunas;
public:
    Didaktorikos(string onoma, string epi8eto, int ID, int ma8hamta, string themaDiplomatikhs,int xroniaEreunas):Metaptuxiakos(onoma, epi8eto, ID, ma8hmata, themaDiplwmatikhs) {
        this->xroniaEreunas;
    }

    void Ptuxio(){
        if (ma8hmata >= 3 && xroniaEreunas >= 4)
            cout << "Phres ptuxio" <<endl;
        else
            cout << "Den to phres";
    }

    void display() {
        Metaptuxiakos::display();
        cout << xroniaEreunas << endl;
    }
};

int main() {

    Proptuxiakos p("Kwstikas", "Kwstopoulos", 123456, 25, 30);
    p.display();
    Metaptuxiakos m("Annoula", "Annopoulou", 64564, 10, "Pshlokatalaves");
    m.display();
    Didaktorikos d("Futos","Futidhs", 534534, 3, "Fwtosun8esh", 5);
    d.display();

    return 0;
}




