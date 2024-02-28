#include <iostream>
#include <cstring>

using namespace std;

class Travel_ticket {
private:
    char *from;
    string to;
    float *price;

public:
    Travel_ticket() {
        from = new char[20];
        strcpy(from, "unknown"); // Εναλλακτικά και πιο απλά: from = "unknown";
        to = "unknown";
        price = new float;
        *price = 0;
    }

    Travel_ticket(char *from, string to, float price) {
        int len1;

        len1 = strlen(from);
        this->from = new char[len1+1];
        strcpy(this->from, from);

        this->to = to;

        this->price = new float;
        *(this->price) = price;
    }

    ~Travel_ticket() {
        delete[] from;
        delete price;
    }

    char* get_from () {
        return from;
    }

    string get_to() {
        return to;
    }

    float get_price() {
        return *price;
    }

    void write_data() {
        cout << "Source : " << from << endl;
        cout << "Destination : " << to << endl;
        cout << "Price : " << *price << endl;
    }
};

int main () {
    Travel_ticket *t1 = new Travel_ticket();
    Travel_ticket *t2 = new Travel_ticket( (char *) "Athens", "Samos", 100);

    t1->write_data();
    t2->write_data();

    return 0;
}
