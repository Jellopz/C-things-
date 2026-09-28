#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cout << "Enter the radius: ";
    cin >> x;
    double A = M_PI * pow(x, 2);
    cout << "The area of the circle is: " << A << endl;
    return 0;
}