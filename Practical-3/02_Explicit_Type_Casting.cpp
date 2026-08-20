#include <iostream>
using namespace std;

int main() {
    float value;
    cout << "Enter a float value: ";
    cin >> value;

    int result = (int)value;

    cout << "Float value: " << value << endl;
    cout << "Integer value after explicit casting: " << result << endl;

    return 0;
}
