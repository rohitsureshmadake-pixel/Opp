#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[2];

    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: " << s[i].rollNo << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}
