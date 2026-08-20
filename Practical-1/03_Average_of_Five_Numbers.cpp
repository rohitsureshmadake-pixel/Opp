#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, average;

    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    average = (a + b + c + d + e) / 5;

    cout << "Average = " << average << endl;
    return 0;
}
