#include <iostream>
using namespace std;

class Employee {
private:
    string employeeName;
    string employeeId;
    float salary;
    int overtime;

    // Υπολογισμός συνολικής αμοιβής για ένα έτος (12 μήνες)
    float totalSalary() {
        if (overtime > 50)
            return 12 * salary + 10 * overtime;
        else
            return 12 * salary + 15 * overtime;
    }

public:
    void setElements(string pemployeeName, string pemployeeId, float psalary=700) {
        employeeName = pemployeeName;
        employeeId = pemployeeId;
        salary = psalary;
        overtime=0;
    }

    void setOvertime(int povertime) {
        overtime = povertime;
    }

    void display() {
        cout << "Onoma ypallilou: " << employeeName << endl;
        cout << "Arithmos tautotitas: " << employeeId << endl;
        cout << "Synolilkos misthos: " << totalSalary() << endl;
    }
};

int main() {
    Employee employees[5];
    string name, id;
    float salary;
    int overtime;

    for (int i=0; i<5; i++) {
        cout << "Dwste to onoma tou " << i+1 << "ou ypallilou: " << endl;
        cin >> name;

        cout << "Dwste ton arithmo tautotitas: " << endl;
        cin >> id;

        cout << "Dwste ton vasiko mistho (0 an den thelete na orisete): " << endl;
        cin >> salary;

        cout << "Poies einai oi wres yperwrias tou: " << endl;
        cin >> overtime;

        if (salary == 0)
            employees[i].setElements(name, id);
        else
            employees[i].setElements(name, id, salary);
        employees[i].setOvertime(overtime);
    }

    cout << endl << "Ta stoixeia twn 5 ypallilwn einai:" << endl;
    for (int i=0; i<5; i++) {
        employees[i].display();
    }

    return 0;
}
