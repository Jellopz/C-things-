#include <iostream>
using namespace std;

int main() {
    double Fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> Fahrenheit;
    double Celsius = (Fahrenheit -32) * 5 / 9;
    cout << "Temperature in Celsius: " << Celsius << endl;
}