#include <iostream>
using namespace std;

class Pet {
protected:
    string name;
    int age;
    float weight;
public:
    Pet(string name, int age, float weight) {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void display() {
        cout << "To onoma tou: " << name <<endl;
        cout << "H hlikia tou: " << age <<endl;
        cout << "To varos tou: " << weight <<endl;
    }

    string get_life() {
        return "agnwsto prosdokimo zwhs";
    }
};
class Dog : public Pet {
    string breed;
public:
    Dog (string name, int age, float weight, string breed) : Pet(name, age, weight) {
        this->breed = breed;
    }

    void display() {
        Pet::display() ;
        cout << "To eidos einai: " << breed <<endl;
    }

    string get_life() {
        if (weight > 45)
            return "Peripou 7 xronia";
        else
            return "Peripou 13 xronia";
    }
};

class Turtle : public Pet {
public:
    Turtle (string name, int age, float weight) : Pet(name, age, weight) {};

    void display() {
        Pet::display();
    }
    
    string get_life() {
        return "para polla xronia";
    }

};

int main() {
    Dog d1("Rex", 2, 15, "Roadviler");
    d1.display();

    Turtle t1("Lalo", 100, 8);
    t1.display();

    return 0;
}



