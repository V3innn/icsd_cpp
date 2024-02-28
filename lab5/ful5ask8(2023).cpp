#include <iostream>
#include <fstream>
using namespace std;

class Part {
    int partNum;
    string description;
    string brand;
public:
    Part(int partNum, string description, string brand) {
        this->partNum = partNum;
        this->description = description;
        this->brand = brand;
    }

    int get_partNum() {
        return partNum;
    }

    string get_description() {
        return description;
    }

    string get_brand() {
        return brand;
    }
};

int main() {
    // Δημιουργία 2 αντικειμένων
    Part p1(1072957, "steering column switch", "JP GROUP");
    Part p2(23452795, "water tank", "Valeo");

    ifstream is;
    ofstream os;

    os.open("parts.txt");
    if (os.fail()) {
        cerr << "Can't open text file for output" << endl;
        exit(1);
    }

    os << "Part List" << endl;
    os << "Brand: " << p1.get_brand() << ", Description (PN): " << p1.get_description() << " (" << p1.get_partNum() << ")" << endl;
    os << "Brand: " << p2.get_brand() << ", Description (PN): " << p2.get_description() << " (" << p2.get_partNum() << ")" << endl;
    os.close();

    // Άνοιγμα αρχείου για ανάγνωση και εμφάνιση περιεχομένου στην οθόνη
    is.open("parts.txt");
    if (is.fail()) {
        cerr << "Can't open text file for input" << endl;
        return 2;
    }

    char c;
    while (is.get(c)) {
        cout << c;
    }
    is.close();

    return 0;
}
