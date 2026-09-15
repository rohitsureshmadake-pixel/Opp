#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }
    friend void compare(Number n1, Number n2);
};

void compare(Number n1, Number n2) {
    if (n1.value > n2.value)
        cout << "First object is greater." << endl;
    else if (n2.value > n1.value)
        cout << "Second object is greater." << endl;
    else
        cout << "Both objects are equal." << endl;
}

int main() {
    Number n1, n2;
    cout << "Enter details for first object:\n";
    n1.input();
    cout << "Enter details for second object:\n";
    n2.input();
    compare(n1, n2);
    return 0;
}
