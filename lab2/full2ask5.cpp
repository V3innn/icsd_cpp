#include <iostream>
using namespace std;

class CreditCard {
    string idCard;
    string owner;
    double limit;
    double credit;
public:
    void setValues(string ownerp, string idCardp, double limitp){
        owner = ownerp;
        idCard = idCardp;
        limit = limitp;
        credit = 0.0;
    }

    // Χρέωση ποσού στην κάρτα
    bool charge(double amount) {
		if ((credit + amount) <= limit) {
			credit += amount;
			return true;
		}
		return false;
    }

    //Επιστροφή ποσού στην κάρτα
    void refund(double amount) {
        credit -= amount;
    }

    //Επιστροφή συνολικής οφειλής
    double getCredit() {
        return credit;
    }
};

int main() {
    CreditCard card1;

    card1.setValues("George Iwannou", "4305-8925-5824-9907", 1500.0);
    card1.charge(750);
    card1.charge(1000);

    cout << "Credit Amount : " << card1.getCredit();
    return 0;
}

