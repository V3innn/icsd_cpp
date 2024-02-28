#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string afm;
public:
    Employee(string, string);
    void display() const {
        cout << "Name: " << name << endl;
        cout << "AFM: " << afm << endl;
    }
};

Employee::Employee(string name, string afm) {
    this->name = name;
    this->afm = afm;
}

class SalariedEmployee : public Employee {
private:
    float salary;
public:
    SalariedEmployee(string, string, float);
    float pay() const;
    void display() const;
};

SalariedEmployee::SalariedEmployee(string name, string afm, float salary)
    : Employee(name, afm), salary(salary) {}

float SalariedEmployee::pay() const {
    return salary;
}

void SalariedEmployee::display() const {
    Employee::display();
    cout << "Salary for a month : " << pay() << endl;
    cout << "---------------------------------------------------" << endl;
}

class HourlyEmployee : public Employee {
private:
    int hours;
public:
    HourlyEmployee(string, string, int);
    float pay() const;
    void display() const;
};

HourlyEmployee::HourlyEmployee(string name, string afm, int hours)
    : Employee(name, afm) {
    this->hours = hours;
}

float HourlyEmployee::pay() const {
    return hours * 8;
}

void HourlyEmployee::display() const {
    Employee::display();
    cout << "Salary for a month : " << pay() << endl;
    cout << "---------------------------------------------------" << endl;
}

int main() {
    SalariedEmployee empl("Giannis Iwannou", "01", 1200);
    HourlyEmployee emp2("Maria Euthimiou","03", 160);
    empl.display();
    emp2.display();

    return 0;
}
