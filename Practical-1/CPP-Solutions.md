# Practical 1 – C++ Solutions

This file contains the C++ solutions for all 11 practice questions.

## 1. Simple Interest
```cpp
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter principal, rate and time: ";
    cin >> principal >> rate >> time;
    cout << "Simple Interest = " << (principal * rate * time) / 100 << endl;
    return 0;
}
```

## 2. Area and Perimeter of Rectangle
```cpp
#include <iostream>
using namespace std;

int main() {
    float length, breadth;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    cout << "Area = " << length * breadth << endl;
    cout << "Perimeter = " << 2 * (length + breadth) << endl;
    return 0;
}
```

## 3. Average of Five Numbers
```cpp
#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;
    cout << "Average = " << (a + b + c + d + e) / 5 << endl;
    return 0;
}
```

## 4. Swap Two Numbers Without Third Variable
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
```

## 5. Celsius into Fahrenheit
```cpp
#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Enter Celsius: ";
    cin >> celsius;
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Fahrenheit = " << fahrenheit << endl;
    return 0;
}
```

## 6. Factorial of a Number
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++)
            factorial *= i;
        cout << "Factorial = " << factorial << endl;
    }
    return 0;
}
```

## 7. Fibonacci Series
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
    return 0;
}
```

## 8. Armstrong Number
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, original, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;
    return 0;
}
```

## 9. Reverse a String
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed string: ";
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
    cout << endl;
    return 0;
}
```

## 10. Different Patterns Using For Loop
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Pattern 1:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "Pattern 2:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "Pattern 3:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
```

## 11. Structure to Store and Display 2 Student Details
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[2];

    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: " << s[i].rollNo << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
    return 0;
}
```
