#include <iostream>
using namespace std;

class StudentMember {
private:
    string name;
    string surname;
    string id;
    int numberItems;
public:
    StudentMember(string p_name, string p_surname, string p_id);
    bool setNumberItems(int p_numberItems);
    void display();
};

StudentMember::StudentMember(string p_name, string p_surname, string p_id) {
    name = p_name;
    surname = p_surname;
    id = p_id;
}

bool StudentMember::setNumberItems(int p_numberItems) {
    if (p_numberItems > 0) {
        numberItems = p_numberItems;
        return true;
    }

    numberItems = 0;
    return false;
}

void StudentMember::display() {
    cout << "Name: " << name << ", Surname: " << surname << ", Member id: " << id << ", Number of Items: " << numberItems << endl;
    if (numberItems > 10)
        cout << "You have exceeded the limit. You can not loan other items!" << endl;
}

int main() {
    StudentMember stud1("Kwstikas", "Kwstopoulos", "001");
    stud1.setNumberItems(-6);
    stud1.display();
    stud1.setNumberItems(6);
    stud1.display();

    StudentMember stud2("Maria", "Palamh", "011");
    stud2.setNumberItems(6);
    stud2.display();
    stud2.setNumberItems(12);
    stud2.display();
    return 0;
}
