#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
    int age;
    int weight;
public:
    Pet(string, int, int);
    void display() {
        cout << "Pet's Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
    }

    string getlifespan() {
        return "Unknown life expectancy";
    }
};

Pet::Pet(string name, int age, int weight) {
    this->name = name;
    this->age = age;
    this->weight = weight;
}

class Dog : public Pet {
private:
    string breed;
public:
    Dog(string, int, int, string);
    void display();

    string getlifespan() {
        if (weight > 45)
            return "About seven years";
        else
            return "About 13 years";
    }
};

Dog::Dog(string name, int age, int weight, string breed)
    : Pet(name, age, weight), breed(breed) {}

void Dog::display() {
    Pet::display();
    cout << "Dog's breed : " << breed << endl;
    cout << "Life span : " << getlifespan() << endl << endl;
}

class Turtle : public Pet {
public:
    Turtle(string, int, int);
    void display();

    string getlifespan() {
        return "Too many years";
    }
};

Turtle::Turtle(string name, int age, int weight)
    : Pet(name, age, weight) {}

void Turtle::display() {
    Pet::display();
    cout << "Life span : " << getlifespan() << endl << endl;
}

int main() {

    // Δημιουργία πίνακα δεικτών αντικειμένων
    Pet *mypets[4];

    mypets[0] = new Dog("Orfeas", 3, 5, "Maltez");
    mypets[1] = new Dog("Luna", 6, 12, "Greek Shepherd");
    mypets[2] = new Turtle("Tortuga", 1, 7);
    mypets[3] = new Dog("Bella", 1, 7, "Kokoni");

    // πολυμορφικός κώδικας
    for (int i=0; i<4; i++) {
        mypets[i]->display() ; 	// Θα πρέπει η display στην pet
                                // να δηλωθεί ως virtual
    }


    return 0;
}
