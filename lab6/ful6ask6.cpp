#include <iostream>
using namespace std;

class Cone{
private:
    double *rad;
    double *hgt;

public:
    Cone(double radius, double height){
		// Συμπληρώστε τον απαραίτητο κώδικα
        rad = (double*) new double;
        *rad = radius;

        hgt = (double*) new double;
        *hgt = height;
    }

    ~Cone(){
		// Συμπληρώστε τον απαραίτητο κώδικα
        delete rad;
        delete hgt;
    }

	// Ορίστε τις απαραίτητες συναρτήσεις της κλάσης
    double getRadius() const { return *rad; }
    double getHeight() const { return *hgt; }

    double CalculateBaseArea() const;
};

double Cone::CalculateBaseArea() const {
    return (*rad) * (*rad) * 3.14159;
}

int main() {
double radius, height;

// Ανάγνωση των στοιχείων του κώνου (ακτίνα, ύψος)
cout << "Enter the cone's dimensions\n";
cout << "Radius: ";
cin >> radius;
cout << "Height: ";
cin >> height;

// Δημιουργία αντικειμένου καλώντας τον κατάλληλο constructor
Cone c(radius, height);

// Εμφάνιση των στοιχείων του κώνου (ακτίνα, ύψος, εμβαδόν)
cout << endl;
cout << "Cone's Characteristics";
cout << "\nRadius: " << c.getRadius();
cout << "\nHeight: " << c.getHeight();
cout << "\nBase Area: " << c.CalculateBaseArea();

return 0;
}
