#include <iostream>
#include <fstream> // απαιτείται για την χρήση του ofstrem, ifstream
#include <cctype> // αντίστοιχα για την toupper()

using namespace std;

int main() {
    ofstream os("out.txt"); // Αρχείο εξόδου
    ifstream is("dummytext.txt"); // Αρχείο εισόδου

    if (!is || !os) {
        cerr << "Error opening file" << endl;

        // Τερματισμός προγράμματος με κωδικό 1 (για να ξέρουμε κατά την εκτέλεση
        // τον λόγο που τερμάτισε)
        exit(1);
    }

    char ch;
    while (is.get(ch)) { // Ανάγνωση περιεχομένου (έναν χαρακτήρα κάθε φορά)
        os.put(toupper(ch));
    }

    os.close();
    is.close();

    cout << "Process is completed" << endl;

    return 0;
}
