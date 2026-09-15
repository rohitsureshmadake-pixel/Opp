#include <iostream>
using namespace std;

class Employee {
    static int count;
public:
    Employee() { count++; }
    static void displayTotal() { cout << "Total employees = " << count << endl; }
};

int Employee::count = 0;

int main() {
    Employee e1, e2, e3;
    Employee::displayTotal();
    return 0;
}
