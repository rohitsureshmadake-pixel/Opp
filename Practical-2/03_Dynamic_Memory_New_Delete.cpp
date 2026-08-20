#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;

    cout << "Enter a value: ";
    cin >> *ptr;
    cout << "Value = " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "Memory released successfully." << endl;
    return 0;
}
