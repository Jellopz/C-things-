#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    char operation;
    double result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        result = num1 / num2;
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}

//Nothing good happens from dividing 0
