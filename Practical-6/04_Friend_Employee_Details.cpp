#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
public:
    void input() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    friend void display(Employee e);
};

void display(Employee e) {
    cout << "\nEmployee Details\n";
    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    Employee e;
    e.input();
    display(e);
    return 0;
}
