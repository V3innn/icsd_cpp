#include <iostream>
#include <string>
using namespace std;

class StudentRecord{
public:
    string firstName;
    string lastName;
    string registrationNumber;
    float averageGrade;
    char score;

    void studentScore(){
        if(averageGrade>9.0)
            score='A';
        else if(averageGrade>=7.0)
            score='B';
        else
            score='C';
    }
};

int main(){
    StudentRecord stud;
    cout<<"Enter first name: ";
    cin>>stud.firstName;
    cout<<"Enter last name: ";
    cin>>stud.lastName;
    cout<<"Enter registration number: ";
    cin>>stud.registrationNumber;
    cout<<"Enter average rating: ";
    cin>>stud.averageGrade;
    stud.studentScore();
    cout<< "\n\nStudent Details\n" <<stud.registrationNumber <<" "
    <<stud.firstName <<' ' <<stud.lastName <<endl;
    cout << "Your score is " <<stud.score <<" for an average grade of "
    <<stud.averageGrade <<endl;
}
















