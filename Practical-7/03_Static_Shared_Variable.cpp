#include <iostream>
using namespace std;

class Demo {
    static int value;
public:
    void setValue(int v) { value = v; }
    void display() { cout << "Shared value = " << value << endl; }
};

int Demo::value = 0;

int main() {
    Demo d1, d2;
    d1.setValue(100);
    cout << "Object 1: ";
    d1.display();
    cout << "Object 2: ";
    d2.display();
    return 0;
}
