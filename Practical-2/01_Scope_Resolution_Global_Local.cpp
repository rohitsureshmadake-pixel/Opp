#include <iostream>
using namespace std;

int value = 100;

int main() {
    int value = 50;

    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;

    return 0;
}
