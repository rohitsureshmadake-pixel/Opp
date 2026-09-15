#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) { value = v; }
    friend void maximum(Number n1, Number n2);
};

void maximum(Number n1, Number n2) {
    if (n1.value > n2.value)
        cout << "Maximum = " << n1.value << endl;
    else
        cout << "Maximum = " << n2.value << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Number n1(a), n2(b);
    maximum(n1, n2);
    return 0;
}
