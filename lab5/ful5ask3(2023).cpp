#include <iostream>
#define SIZE 200

using namespace std;

class Book {
private:
    string title;
    string year;
    string author;
    string isbn;
    bool available;

public:
    Book() {}

    Book(string ptitle, string pyear, string pauthor, string pisbn) {
        title = ptitle;
        year = pyear;
        author = pauthor;
        isbn = pisbn;

        // Το βιβλίο μόλις εισάγεται, είναι διαθέσιμο για δανεισμό
        available = true;
    }

    void setBook(string ptitle, string pyear, string pauthor, string pisbn) {
        title = ptitle;
        year = pyear;
        author = pauthor;
        isbn = pisbn;
    }

    void setStatus(bool pavailable) {
        available = pavailable;
    }

    string getTitle() {
        return title;
    }

    // Εμφάνιση των ιδιοτήτων ενός βιβλίου
    void display() {
        cout << endl;
        cout << "O titlos tou vivliou einai: " << title << endl;
        cout << "To vivlio ekdothike: " << year << endl;
        cout << "O syggrafeas tou vivliou einai: " << author << endl;
        cout << "To ISBN tou vivliou einai: " << isbn << endl;
    }

    // Έλεγχος αν ένα βιβλίο είναι δανεισμένο ή όχι
    bool borrowedCheck() {
        return available;
    }

    // Χαρακτηρισμός ενός βιβλίου ως δανεισμένου
    void borrowedMark() {
        available = false;
    }

    // Χαρακτηρισμός ενός βιβλίου ως διαθέσιμου προς δανεισμό
    void borrowedReturn() {
        available = true;
    }
};

class Library {
private:
    Book book[SIZE];
    string address;
    string librarian;
    int number_of_books;

public:
    Library(string paddress, string plibrarian) {
        address = paddress;
        librarian = plibrarian;
        number_of_books = 0;
    }

    // Προβολή στοιχείων βιβλιοθήκης
    void display() {
        cout << "H dieuthinsh ths vivliotikis einai: " << address << endl;
        cout <<  "To onoma tou ypeythinou vivliothikis einai: " << librarian << endl;
    }


    // Προσθήκη ενός νέου βιβλίου στην βιβλιοθήκη
    int insertBook(string title, string year, string author, string isbn) {
        if (number_of_books == SIZE) {
            cout << "Den einai dinati i prosthiki allou vivliou" << endl;
            return -1;
        } else {
            book[number_of_books].setBook(title, year, author, isbn);
            book[number_of_books].setStatus(true);
            number_of_books++;
            return 1;
        }
    }

    // Δανεισμός βιβλίου
    void borrowBook(string title) {
        //αναζήτηση στα βιβλία που είναι αποθηκευμένα στον πίνακα
        for(int i=0; i<number_of_books; i++) {
            if(book[i].getTitle() == title) {
                // ελέγχουμε αν το βιβλίο είναι διαθέσιμο και σε περίπτωση που είναι συνεχίζουμε
                // στον δανεισμό του
                if(book[i].borrowedCheck()) {
                    // σημειώνουμε το βιβλίο ως μη διαθέσιμο για δανεισμό
                    book[i].borrowedMark();
                    cout << "To vivlio daneistike" << endl ;
                } else
                    cout << "To vivlio den einai diathesimo" << endl;
                return;
            }
        }

        cout << "Den yparxei vivlio me auton ton titlo" << endl;
    }

    // Εμφάνιση των στοιχείων για όλα τα βιβλία της βιβλιοθήκης
    void displayAllBooks() {
        cout << endl << "Lista vivliwn" << endl;
        for(int i=0; i<number_of_books; i++)
            book[i].display();
    }

    // Εμφάνιση μόνο των βιβλίων που είναι διαθέσιμα προς δανεισμό
    void displayAvailableBooks() {
        cout << endl << "Lista vivliwn poy einai diathesima gia daneismo" << endl;
        for(int i=0; i<number_of_books; i++) {
            if(book[i].borrowedCheck()) {
                book[i].display();
            }
        }
    }

    // Επιστροφή βιβλίου
    void returnBook(string title) {
        for(int i=0; i<number_of_books; i++)
            if(book[i].getTitle() == title) {
                if(!book[i].borrowedCheck()) {
                    // Σημειώνουμε το βιβλίο ως διαθέσιμο για δανεισμό
                    book[i].borrowedReturn();
                    cout << "To vivlio epistrafhke" << endl;
                } else
                    cout << "To sigkekrimeno vivlio den einai daneismeno" << endl;
                return;
            }
        cout << "Den yparxei vivlio me auton ton titlo" << endl;
    }
};

int main() {
    Library lib1("Karlovassi", "Nikolaou Iwannis");
    Library lib2("Lesvos", "Pappa Dimitra");

    lib1.display();
    lib1.insertBook("The C++ Primer", "2013", "Stanley B. Lippman", "978-0321714114");
    lib1.insertBook("Java Concurrency in Practice", "2006", "Brian Goetz", "978-0321349606");
    lib1.insertBook("The Basics of Hacking and Penetration Testing : Ethical Hacking and Penetration Testing Made Easy", "2013", "Patrick Engebretson", "9780124116443");
    lib1.displayAllBooks();
    lib1.borrowBook("The C++ Primer");
    lib1.borrowBook("Java Concurrency in Practice");
    lib1.displayAvailableBooks();
    lib1.returnBook("Java Concurrency in Practice");
    lib1.displayAvailableBooks();

    lib2.display();
    return 0;
}
