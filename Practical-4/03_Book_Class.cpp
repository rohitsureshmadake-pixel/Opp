#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    float price;
public:
    void input() {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }
    void display() {
        cout << "\nBook Details\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;
    b.input();
    b.display();
    return 0;
}
