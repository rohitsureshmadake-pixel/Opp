#include <iostream>
using namespace std;

inline double simpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, rate, time;
    cout << "Enter principal, rate and time: ";
    cin >> principal >> rate >> time;
    cout << "Simple Interest = " << simpleInterest(principal, rate, time) << endl;
    return 0;
}
