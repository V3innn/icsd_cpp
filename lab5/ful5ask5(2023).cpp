#include <iostream>
#include <fstream> // απαιτείται για την χρήση του ofstrem, ifstream

using namespace std;

int main() {
    ofstream os("distinguished.txt"); // Αρχείο εξόδου
    ifstream is("grades.txt"); // Αρχείο εισόδου

    if (!is || !os) {
        cerr << "Error opening file" << endl;

        // Τερματισμός προγράμματος με κωδικό 1 (για να ξέρουμε κατά την εκτέλεση
        // τον λόγο που τερμάτισε)
        exit(1);
    }

    int totalStudents = 0;
    int excelc = 0;
    int failc = 0;
    string AM;
    float grade;

    while (!is.eof()) {
        is >> AM >> grade;

        totalStudents++;
        if (grade < 5)
            failc++;
        else if(grade >= 8.5) {
            excelc++;

            // Εγγραφή αριστούχου στο αρχείο εξόδου
            os << AM << " " << grade << endl;
        }
    }

    cout << "Students failed: " << failc << endl;
    cout << "Students excelled: " << excelc << endl;
    cout << "Total Students: " << totalStudents << endl;

    os.close();
    is.close();

    return 0;
}
