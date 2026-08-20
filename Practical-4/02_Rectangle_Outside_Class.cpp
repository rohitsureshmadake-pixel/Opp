#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
public:
    void input();
    float area();
};

void Rectangle::input() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
}

float Rectangle::area() {
    return length * breadth;
}

int main() {
    Rectangle r;
    r.input();
    cout << "Area of Rectangle = " << r.area() << endl;
    return 0;
}
