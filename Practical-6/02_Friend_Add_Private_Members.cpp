#include <iostream>
using namespace std;

class ClassA { int a; public: ClassA(int x) { a = x; } friend int add(ClassA, ClassB); };
class ClassB { int b; public: ClassB(int x) { b = x; } friend int add(ClassA, ClassB); };
int add(ClassA x, ClassB y) { return x.a + y.b; }

int main() {
    int a, b;
    cout << "Enter two numbers: "; cin >> a >> b;
    ClassA x(a); ClassB y(b);
    cout << "Sum = " << add(x, y) << endl;
    return 0;
}
