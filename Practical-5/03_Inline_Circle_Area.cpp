#include <iostream>
using namespace std;

inline double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;
    return 0;
}
