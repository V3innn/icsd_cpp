#include <iostream>
using namespace std;

class Employee {
    string fullname;
    float salary;
public:

 Employee(string p_fullname, float p_salary)  {
    fullname = p_fullname;
    salary = p_salary; 
  cout << "Employee " << fullname <<" just created having a salary of " << salary << endl;
 }

    void set_salary(float new_sal) {
        salary = new_sal;
    }

    void print_details();
};

void Employee::print_details() {
    cout << fullname << " has now a salary of " << salary << endl;
}

int main() {

Employee e("Nick", 1000);

e.set_salary(1500);

e.print_details();

return 0;
}
