#include <iostream>
using namespace std;

class Course {
    string courseId;
    float labScore;
    float examScore;
    
    float finalCourse() {
        return 0.40*labScore + 0.60*examScore;
    }

public:
    void insertElements() {
        cout << "Eisagetai ton kwdiko: " << endl;
        cin >> courseId;
        cout << "Eisagetai th va8mologia tou ergasthriou: " << endl;
        cin >> labScore;
        cout << "Eisagete tin vathmologia tis exetasis: " << endl;
		cin >> examScore;
    }

    void displayElements() {
        cout << "Kwkidikos tou ma8hmatos: " <<courseId <<endl; 
        cout << "Vathomologia ergastiriou: " << labScore << endl;
        cout << "Vathomologia exetasis: " << examScore << endl;
        cout << "Telikh va8mologia: " <<finalCourse() <<endl;
        cout <<endl;
    }
};

class Student {
    string studentName;
    string studentId;
    Course course1;
    Course course2;

public:
    Student(string pstudentName, string pstudentId) {
        studentName = pstudentName;
        studentId = pstudentId;
    }

    void insertCourses() {
        cout << "Eisagetai ta stoixeia tou 1ou ma8hamtos " <<endl;
        course1.insertElements();
        cout << "Eisagetai ta stoixeia tou 2ou ma8hamtos " <<endl;
        course2.insertElements();
    }

    void displayStudents() {
        cout << "To onoma tou foithth einai: " <<studentName <<endl;
        cout << "to id tou: " <<studentId <<endl;
        cout << "Ta stoixeia twn mathimatwn tou einai" << endl << endl;

        course1.displayElements();
        course2.displayElements();
    }
};

int main() {
    
    Student std1("Kwstikas", "15124");
    std1.insertCourses();
    std1.displayStudents();

    Student std2("Kwstas Vlachos", "321/2021010");
	std2.insertCourses();
	std2.displayStudents();
	return 0;
    
    
}