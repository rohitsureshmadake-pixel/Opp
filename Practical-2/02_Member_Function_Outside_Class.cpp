#include <iostream>
using namespace std;

class Student {
public:
    void display();
};

void Student::display() {
    cout << "Member function defined outside the class." << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}
