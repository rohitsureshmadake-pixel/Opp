#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;
public:
    void input();
    void display();
};

void Student::input() {
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
}

void Student::display() {
    cout << "\nStudent Information\n";
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
