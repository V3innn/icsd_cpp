#include <iostream>
#include <cstring>

using namespace std;

class student {
private:
    char *name;
    int studentId;
    int semester;

public:
    student(): studentId(0), semester(0) {
        name = new char[20];
        strcpy(name, "John Doe");
    }

    student(char *n, int id, int s): studentId(id), semester(s) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void set(){
        cout << "Enter name: " << endl;
        cin.getline(name, 20);

        cout << "Enter student’s id: " << endl;
        cin >> studentId;

        cout << "Enter semester: " << endl;
        cin >> semester;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Student's id: " << studentId << endl;
        cout << "Semester: " << semester << endl;
        cout << endl;
    }

    ~student() {
            delete [] name;
    }
};

int main () {
    student s1((char *) "George Iliadis", 12, 3);
    cout << "Data of student S1" << endl;
    s1.display();

    student s2;
    cout << "Data of student S2" << endl;
    s2.display();

    s2.set();

    cout << endl;
    cout << "After setting s2" << endl << endl;

    cout << "Data of student S1" << endl;
    s1.display();

    cout << "Data of student S2" << endl;
    s2.display();

    return 0;
}
