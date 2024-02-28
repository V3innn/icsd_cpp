#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int studentId;
public:
    Student() {}
    Student(string n, int id) {
    name = n;
    studentId = id;
}

void printStudentDetails() {
    cout << studentId << " - " << name << endl;
}
};
int main() {
    Student students[] = {Student("Giannis Iwannou", 2),
    Student("Nikos Pappas", 4), Student("Elena Argyrou", 3)};
    for(int i=0; i < 3; i++) {
        students[i].printStudentDetails();
}
}