#include <iostream>
using namespace std;

class Person {
private:
    string personName;
    string idNumber;

public:
    Person(string personName, string idNumber) {
        this->personName = personName;
        this->idNumber = idNumber;
    }

    /* Συνάρτηση που ελέγχει αν το αντικείμενο Person της παραμέτρου
       είναι ίδιο. Αρκεί ο αριθμός ταυτότητας να είναι ίδιος. */
    bool isEqual(const Person &p) {
        if (idNumber == p.idNumber)
            return true;

        return false;
    }
};

int main() {
    Person p1("Kwstas", "AE332992");
    Person p2("George", "AN112445");
    Person p3("Kwstas", "AE332992");

    cout << (p1.isEqual(p2) ? "p2 same person with p1\n" : "p2 different person with p1\n");
    cout << (p1.isEqual(p3) ? "p3 same person\n" : "p3 different person with p1\n");
}

/**
Είναι πιο αποδοτική η υλοποίηση της λειτουργίας ορίζοντας την παράμετρο ως αναφορά σε 
αντικείμενο έτσι ώστε να αποφύγουμε τη δημιουργία αντιγράφου του αντικειμένου που 
μεταβιβάζεται ως όρισμα (π.χ. αν το δηλώναμε ως: bool isEquals(Person p)).
Επίσης είναι σκόπιμο να δηλώσουμε το όρισμα ως const για να αποφύγουμε τυχόν 
τροποποίηση του αντικειμένου από την συνάρτηση.
*/
