#include <iostream>
using namespace std;

class Book {
    float price;
public:
    string title;
    int pages;

    Book();
    Book(string p_title);
    Book(string p_title, int p_pages);
    void display();
    void set_price(float p_price);
};

Book::Book(){
    title = "";
    pages = 0;
    price = 0.0;
}
Book::Book(string p_title){
    title = p_title;
    pages = 0;
    price = 0.0;
}
Book::Book(string p_title, int p_pages){
    title = p_title;
    pages = p_pages;
    price = 0.0;
}

void Book::display() {
    cout << "Title: " << title <<", pages: " << pages <<" price: " << price << "" << endl;
}

void Book::set_price(float p_price){
    price = p_price;
}

int main(){
    Book b1;
    Book b2("Programming in C++");
    Book b3("Programming in Python", 200);

    b1.title = ("Around the world in 80 days");
    b1.pages = 180;
    b1.set_price(12.80);

    b2.pages = 667;
    b2.set_price(48.50);

    b3.set_price(499.00);

    b1.display();
    b2.display();
    b3.display();
    return 0;
}