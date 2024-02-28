#include <iostream>
using namespace std;

class An8rwpos {
protected:
    string fullname;
public:
    An8rwpos(string fullname) {
        this->fullname = fullname;
    }
  virtual void display() {
    cout << "To onomatepwnumo einai: " <<fullname <<endl;
  }  
};

class Didaktoras: virtual public An8rwpos {
protected:
    string ma8hma1;
    string ma8hma2;
    string va8mida;
public:
    Didaktoras(string fullname, string ma8hma1, string ma8hma2, string va8mida):An8rwpos(fullname) {
        this->ma8hma1 = ma8hma1;
        this->ma8hma2 = ma8hma2;
        this->va8mida = va8mida;
    }
  void display() {
    cout << "To ma8hma1 einai : " <<ma8hma1 <<endl;
    cout << "To ma8hma2 einai : " <<ma8hma2 <<endl;
    cout << "H va8mida tou ka8hghth einai : " <<va8mida <<endl;
  }    
};

class Ereunhths: virtual public An8rwpos {
protected:
    string pedio_ereunas;
    int ari8mos_dhmosieusewn;
public:
    Ereunhths(string fullname, string pedio_ereunas, int ari8mos_dhmosieusewn):An8rwpos(fullname) {
        this->pedio_ereunas = pedio_ereunas;
        this->ari8mos_dhmosieusewn = ari8mos_dhmosieusewn;
    }
  void display() {
    cout << "To pedio eureunas tou einai : " <<pedio_ereunas <<endl;
    cout << "O ari8mos dhmwsieusewn tou einai : " <<ari8mos_dhmosieusewn <<endl;
    } 
};

class Ka8hghths: public Didaktoras, public Ereunhths {
    string tmhma;
public:
   Ka8hghths(string fullname, string ma8hma1, string ma8hma2, string va8mida, string pedio_ereunas, int ari8mos_dhmosieusewn, string tmhma):Didaktoras(fullname, ma8hma1, ma8hma2, va8mida), Ereunhths(fullname, pedio_ereunas, ari8mos_dhmosieusewn), An8rwpos(fullname) {
    this-> tmhma = tmhma;
   }
   void display() {
    An8rwpos::display();
    Didaktoras::display();
    Ereunhths::display();
    } 
};

int main() {
    An8rwpos *p = new Ka8hghths("Kwstikas Kwstopoulos","C", "logikh", "AntiGamwmanos", "Peologia", 69, "VGES");
    p->display();
}