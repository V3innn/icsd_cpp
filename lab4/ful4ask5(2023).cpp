#include <iostream>
using namespace std;

/*
* Class Address
*/
class Address {
    string street;
    int number;
    string city;
    int poCode;

public:
    // setters
    void set_street(string p_street) {
        street=p_street;
    }

    void set_number(int p_number) {
        number=p_number;
    }

    void set_poCode(int p_poCode) {
        poCode=p_poCode;
    }

    void set_city(string p_city) {
        city=p_city;
    }

    // Getters
    string get_street() const {
        return street;
    }

    int get_number() const {
        return number;
    }
    int get_poCode() const {
        return poCode;
    }

    string get_city() const {
        return city;
    }

    void print() {
        cout << street << " " << number << ", " << city << ", " << poCode << endl;
    }
};

/*
* Class Person
*/
class Person {
    string name;
    string surname;
    int birthYear;
    Address pAddress;

public:
    // Constructor function
    Person(string p_surname, string p_name, int p_birthYear, string p_street, int p_number, int p_poCode, string p_city) {
        surname=p_surname;
        name=p_name;
        birthYear=p_birthYear;
        pAddress.set_street(p_street);
        pAddress.set_number(p_number);
        pAddress.set_poCode(p_poCode);
        pAddress.set_city(p_city);
    }

    void print() {
        cout << name << " " << surname << " is " << 2017-birthYear << " years old and stays at: ";
        cout << pAddress.get_street() << " " << pAddress.get_number() << ", " << pAddress.get_city() << ", " << pAddress.get_poCode() << endl;

        // ή εναλλακτικά
        // pAddress.print();
    }
};


int main() {
    // Κατασκευάζουμε 2 άτομα και εμφανίζουμε τα στοιχεία τους και τη διεύθυνσή τους αντίστοιχα
    Person p1("Doukas", "Nikos", 1975, "Pythagoras", 25, 83200, "Karlovasi");
    p1.print();
    Person p2("Douka", "Lilly", 1979, "Aristarchou", 10, 83200, "Karlovasi");
    p2.print();
    return 0;
}
