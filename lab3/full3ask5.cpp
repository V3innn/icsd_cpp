#include <iostream>
using namespace std;

#define numGrades 5

class Student {
    int id;
    string fullName;
    float grade[numGrades];
    float average;

    void computeAvg() {
        float sum=0;
        int i;
        for (i=0; i<numGrades; i++)
            sum = sum + grade[i];
        average = sum / numGrades;
    }

public:
    Student(int id, string fullName):id(id),fullName(fullName) {};

    string getFullName() const {
        return fullName;
    }

    int getId() const {
        return id;
    }

    void succeeded() const {
        if (average >= 5)
            cout << fullName << " Passed" << endl;
        else
            cout << fullName << " Failed" << endl;
    }

    void setGrades(float g[]) {
        for (int i=0; i<numGrades; i++)
            grade[i]=g[i];
        computeAvg();
    }

     void display() const {
        cout << endl;
        cout << "Student's Name: " << fullName << endl;
        cout << "Average Grade: " << average << endl;
        succeeded();
        cout << endl;
     }
};


int main() {
    
    Student s1(1, "Student 1");
    Student s2(2, "Student 2");

    float grade[numGrades];

    cout << "Please insert grades for s1\n";
    for (int i=0; i<numGrades; i++) {
        cin >> grade[i];
    }

    s1.setGrades(grade);
    s1.display();

    cout << "Please insert grades for s2\n";
    for (int i=0; i<numGrades; i++) {
        cin >> grade[i];
    }

    s2.setGrades(grade);
    s2.display();
    
    return 0;
}
