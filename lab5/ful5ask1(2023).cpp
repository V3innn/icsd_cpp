#include <iostream>
using namespace std;

class Student {
    string name;
    int studentId;

public:
    Student() {}

    Student(string n, int id) {
        name = n;
        studentId = id;
    }

    void printStudentDetails() {
        cout << studentId <<" " <<name <<endl;
    }
};

int main() {
    Student students[] = {Student("Kwstis Kwstikas", 420),
    Student("Nikos Poutaniarhs", 777), Student("Kurios Agamhsou", 69)};

    for (int i=0; i<3; i++){
        students[i].printStudentDetails();
    }
}