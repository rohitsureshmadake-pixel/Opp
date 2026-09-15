#include <iostream>
using namespace std;

class A;
class B {
    int value;
public:
    B(int v) { value = v; }
    friend int add(A, B);
};

class A {
    int value;
public:
    A(int v) { value = v; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.value + b.value;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    A a(x);
    B b(y);
    cout << "Sum = " << add(a, b) << endl;
    return 0;
}
