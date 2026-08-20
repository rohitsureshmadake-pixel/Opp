#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number = 123.456789;

    cout << "Using setw():" << endl;
    cout << setw(15) << number << endl;

    cout << "Using setprecision() and fixed:" << endl;
    cout << fixed << setprecision(2) << number << endl;

    cout << "Using left:" << endl;
    cout << left << setw(15) << "C++" << "Formatted Output" << endl;

    cout << "Using right:" << endl;
    cout << right << setw(15) << "C++" << "Formatted Output" << endl;

    return 0;
}
