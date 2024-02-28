#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    int pages;
    float price;
public:
    Book(); // Constructor 1 (default)
    Book(string title); // Constructor 2
    Book(string title, float price); // Constructor 3

    ~Book(); // Destructor
    void print();

    void set_title(string title) {
        this->title = title;
    }

    void set_pages(int pages) {
        this->pages = pages;
    }

    void set_price(float price) {
        this->price = price;
    }
};

Book::Book() {
    pages = 0;
    price = 0.0;
    title = "";
}

Book::Book(string title) {
    pages = 0;
    price = 0.0;
    this->title = title;
}

Book::Book(string title, float price) {
    pages = 0;
    this->price = price;
    this->title = title;
}

Book::~Book() {
    cout << "Object deleted" << endl;
}

void Book::print() {
    cout << "title: " << title << endl;
    cout << "price: " << price << endl;
    cout << "pages: " << pages << endl;
}

int main() {
    Book *b1 = new Book();
	Book *b2 = new Book("Java");
    Book *b3 = new Book("C++ Expert", 30.5);

    b1->set_pages(150);
    b2->set_pages(150);
    b3->set_pages(150);

    cout << "b1: " <<endl;
    (*b1).print(); //ή εναλλακτικά b1->print();
    delete b1;

    cout << endl << "b2: " <<endl;
    b2->print();
    delete b2;

    cout << endl << "b3: " <<endl;
    b3->print();
    cout << endl;
    delete b3;
}
