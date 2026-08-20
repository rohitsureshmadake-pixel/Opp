#include <iostream>
#include <string>
using namespace std;

class Product {
    int productId;
    string name;
    float price;
public:
    void input() {
        cout << "Enter product ID: ";
        cin >> productId;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
    }
    void display() {
        cout << "\nProduct Details\n";
        cout << "Product ID: " << productId << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p;
    p.input();
    p.display();
    return 0;
}
