#include <iostream>
using namespace std;

class Numbers {
    int a, b, c;
public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    friend void average(Numbers n);
};

void average(Numbers n) {
    cout << "Average = " << (n.a + n.b + n.c) / 3.0 << endl;
}

int main() {
    Numbers n;
    n.input();
    average(n);
    return 0;
}
