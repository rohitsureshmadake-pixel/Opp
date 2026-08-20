#include <iostream>
#include <string>
using namespace std;

class Account {
    int accountNo;
    string name;
    double balance;
public:
    void input() {
        cout << "Enter account number: ";
        cin >> accountNo;
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void display() {
        cout << "\nAccount Details\n";
        cout << "Account No: " << accountNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a;
    a.input();
    a.display();
    return 0;
}
