#include <iostream>
using namespace std;

class Object {
    static int count;
public:
    Object() { count++; }
    static void displayCount() { cout << "Total objects = " << count << endl; }
};

int Object::count = 0;

int main() {
    Object a, b, c;
    Object::displayCount();
    return 0;
}
