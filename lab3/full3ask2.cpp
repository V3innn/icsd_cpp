#include <iostream>
#include <string>

using namespace std;

class Person {
public:
       // orizoume constructor
       Person();
       Person(string name, string surname, int age);

       // orizoume destructor
       ~Person() {
          cout << "\n" << "Egine i diagrafi tou antikeimenou" << endl;

       }

        // orizoume print
       void print();

private:
       string onoma, epwnymo;
       int ilikia;
};

//dhmiourgoume default constructor
 Person::Person() {
     onoma = "Unknown";
     epwnymo = "Unknown";
     ilikia = 0;
}

// dhmiourgoume constructor
Person::Person(string name, string surname, int age) {
     onoma = "name";
     epwnymo = "surname";
     ilikia = age;
}


// print
void Person::print() {
     cout << "Onomatepwnymo:" << onoma << " " << epwnymo <<", Hlikia : " << ilikia << endl;
}

int main() {
Person p("John", "Pappas", 30);

//: "Onomatepwnymo: John Pappas, Hlikia : 30"
p.print();

//Person q;
//: " Onomatepwnymo: Unknown Unknown, ������ : 0"
//q.print();

return 0;
}
